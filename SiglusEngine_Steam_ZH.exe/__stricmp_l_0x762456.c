// 函数: __stricmp_l
// 地址: 0x762456
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_14
sub_7470a1(&var_14, arg3)
char* ebx_1

if (arg1 != 0)
    ebx_1 = arg2

uint32_t result

if (arg1 == 0 || ebx_1 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = 0x7fffffff
else if (*(var_14 + 0xa8) != 0)
    void* edi_1 = arg1 - ebx_1
    uint32_t eax_4
    uint32_t eax_6
    
    do
        eax_4 = __tolower_l(zx.d(*(edi_1 + ebx_1)), &var_14)
        eax_6 = __tolower_l(zx.d(*ebx_1), &var_14)
        ebx_1 = &ebx_1[1]
        
        if (eax_4 == 0)
            break
    while (eax_4 == eax_6)
    
    result = eax_4 - eax_6
else
    result = ___ascii_stricmp(arg1, ebx_1)

char var_8
void* var_c

if (var_8 != 0)
    *(var_c + 0x70) &= 0xfffffffd
return result
