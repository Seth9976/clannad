// 函数: sub_403980
// 地址: 0x403980
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* ebp = *(arg1 + 0x68)
sub_403910(arg1)
int32_t eax = *(arg1 + 0x44)

if (eax != 0)
    _free(eax)

if (ebp != 0)
    int32_t i = 0
    int32_t* ebx_1 = ebp + 0xc
    
    do
        sub_410a90(*ebx_1)
        
        if (i != 7)
            _free(*ebx_1)
        
        i += 1
        ebx_1 = &ebx_1[1]
    while (i s< 0xf)
    
    _free(ebp)

__builtin_memset(arg1, 0, 0x70)
return 0
