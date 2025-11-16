// 函数: sub_48517c
// 地址: 0x48517c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_34 = edi
int32_t result = 1
HMODULE eax = LoadLibraryA("kernel32.dll")
int32_t eax_1

if (eax != 0)
    eax_1 = GetProcAddress(eax, "GlobalMemoryStatusEx")
    
    if (eax_1 != 0)
        result = eax_1(arg1)
    
    FreeLibrary(eax)

if (eax == 0 || eax_1 == 0)
    MEMORYSTATUS buffer
    buffer.dwLength = 0x20
    GlobalMemoryStatus(&buffer)
    *(arg1 + 4) = buffer.dwMemoryLoad
    *(arg1 + 0x20) = buffer.dwAvailPageFile
    *(arg1 + 0x10) = buffer.dwAvailPhys
    *(arg1 + 0x30) = buffer.dwAvailVirtual
    *(arg1 + 0x18) = buffer.dwTotalPageFile
    *(arg1 + 8) = buffer.dwTotalPhys
    uint32_t dwTotalVirtual = buffer.dwTotalVirtual
    *(arg1 + 0x24) = 0
    *(arg1 + 0x14) = 0
    *(arg1 + 0x34) = 0
    *(arg1 + 0x1c) = 0
    *(arg1 + 0xc) = 0
    *(arg1 + 0x28) = dwTotalVirtual
    *(arg1 + 0x2c) = 0
    *(arg1 + 0x38) = 0
    *(arg1 + 0x3c) = 0

return result
