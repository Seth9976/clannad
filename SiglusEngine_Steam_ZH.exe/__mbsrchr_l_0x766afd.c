// 函数: __mbsrchr_l
// 地址: 0x766afd
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* result = nullptr
void var_14
sub_7470a1(&var_14, arg3)
void* result_1 = arg1
void* var_10

if (result_1 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
else if (*(var_10 + 8) != 0)
    int32_t ebx
    int32_t var_20_2 = ebx
    
    do
        ebx.b = *result_1
        uint32_t edx_1 = zx.d(ebx.b)
        bool cond:0_1
        
        if ((*(edx_1 + var_10 + 0x19) & 4) == 0)
            cond:0_1 = arg2 != edx_1
        label_766b6f:
            
            if (not(cond:0_1))
                result = result_1
        else
            result_1 += 1
            ebx.b = *result_1
            
            if (ebx.b == 0)
                cond:0_1 = result != 0
                goto label_766b6f
            
            if (arg2 == (edx_1 << 8 | zx.d(ebx.b)))
                result = result_1 - 1
        result_1 += 1
    while (ebx.b != 0)
else
    result = _strrchr(result_1, arg2.b)
char var_8
void* var_c

if (var_8 != 0)
    *(var_c + 0x70) &= 0xfffffffd
return result
