#include <stdio.h>
#include <windows.h>
#include <tchar.h>
#include <pdh.h>
#pragma comment(lib, "pdh.lib")

void printCPUInfo() {
    // Get processor information using Windows API functions
    SYSTEM_INFO sysInfo;
    GetSystemInfo(&sysInfo);

    // Display processor information
    printf("Processor Architecture: %u\n", sysInfo.wProcessorArchitecture);
    printf("Page Size: %u\n", sysInfo.dwPageSize);
    printf("Number of Processors: %u\n", sysInfo.dwNumberOfProcessors);
    printf("Active Processor Mask: %lu\n", sysInfo.dwActiveProcessorMask);
    printf("Minimum Application Address: %p\n", sysInfo.lpMinimumApplicationAddress);
    printf("Maximum Application Address: %p\n", sysInfo.lpMaximumApplicationAddress);
    printf("Allocation Granularity: %u\n", sysInfo.dwAllocationGranularity);
}

void printMemoryInfo() {
    // Get memory information using Windows API functions
    MEMORYSTATUSEX memInfo;
    memInfo.dwLength = sizeof(MEMORYSTATUSEX);
    GlobalMemoryStatusEx(&memInfo);

    // Display memory information
    printf("Total Physical Memory: %I64d bytes\n", memInfo.ullTotalPhys);
    printf("Available Physical Memory: %I64d bytes\n", memInfo.ullAvailPhys);
    printf("Total Virtual Memory: %I64d bytes\n", memInfo.ullTotalVirtual);
    printf("Available Virtual Memory: %I64d bytes\n", memInfo.ullAvailVirtual);
}

void printDiskInfo() {
    // Get disk information using Windows API functions
    ULARGE_INTEGER freeBytesAvailable, totalNumberOfBytes, totalNumberOfFreeBytes;
    GetDiskFreeSpaceEx(NULL, &freeBytesAvailable, &totalNumberOfBytes, &totalNumberOfFreeBytes);

    // Display disk information
    printf("Total Disk Space: %I64d bytes\n", totalNumberOfBytes.QuadPart);
    printf("Free Disk Space: %I64d bytes\n", totalNumberOfFreeBytes.QuadPart);
}

void printOSInfo() {
    // Get OS version information using Windows API functions
    OSVERSIONINFOEX osInfo;
    osInfo.dwOSVersionInfoSize = sizeof(OSVERSIONINFOEX);
    GetVersionEx((OSVERSIONINFO*)&osInfo);

    // Display OS version information
    printf("OS Version: %d.%d.%d\n", osInfo.dwMajorVersion, osInfo.dwMinorVersion, osInfo.dwBuildNumber);
    printf("Service Pack: %s\n", osInfo.szCSDVersion);
}

void printSystemInfo() {
    printOSInfo();
    printf("------------------------------------------------------\n");
    printCPUInfo();
    printf("------------------------------------------------------\n");
    printMemoryInfo();
    printf("------------------------------------------------------\n");
    printDiskInfo();
}

int main() {
    printSystemInfo();

    return 0;
}