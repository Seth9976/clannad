// 函数: sub_5f166d
// 地址: 0x5f166d
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
__chkstk(4)
int32_t __saved_edi
int32_t* var_14 = &__saved_edi
MEMORY_BASIC_INFORMATION buffer
int32_t result

if (VirtualQuery(&__saved_edi, &buffer, 0x1c) == 0)
    result = 0
else
    void* AllocationBase = buffer.AllocationBase
    SYSTEM_INFO systemInfo
    GetSystemInfo(&systemInfo)
    uint32_t dwPageSize = systemInfo.dwPageSize
    int32_t esi_1 = 0
    int32_t var_c = 0
    
    if (sub_5f39f0(&var_c) != 0 && var_c u> 0)
        esi_1 = var_c
    
    uint32_t dwSize = (esi_1 - 1 + dwPageSize) & not.d(dwPageSize - 1)
    
    if (dwSize != 0)
        dwSize += dwPageSize
    
    uint32_t dwSize_1 = dwPageSize * 2
    
    if (dwSize u< dwSize_1)
        dwSize = dwSize_1
    
    void* lpAddress = (not.d(dwPageSize - 1) & var_14) - dwSize
    
    if (lpAddress u< AllocationBase + dwPageSize)
        result = 0
    else
        enum PAGE_PROTECTION_FLAGS lpflOldProtect
        
        if (VirtualAlloc(lpAddress, dwSize, MEM_COMMIT, PAGE_READWRITE) == 0)
            result = 0
        else if (VirtualProtect(lpAddress, dwSize, 0x104, &lpflOldProtect) == 0)
            result = 0
        else
            result = 1

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
