// 函数: sub_439127
// 地址: 0x439127
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_68 = edi
uint32_t edi_1 = 0
int32_t result_1 = 0
int32_t eax = sub_4377a1(arg1, arg2)
int32_t eax_1 = sub_4377a1(arg1, arg3)

if (sub_43782f(arg2, arg3) != 0)
    return 0

int32_t ebx_1 = 0
int32_t var_8_1 = 0
void** var_3c
sub_46bb94(&var_3c)
void** var_60
sub_46bb94(&var_60)

if (eax u> 0)
    while (edi_1 u< eax_1)
        if (sub_437bdc(arg1, arg2, edi_1, &var_3c) s< 0)
            ebx_1 = 1
            var_8_1 = 1
        else
            int32_t var_14
            
            if (sub_437bdc(arg1, arg3, edi_1, &var_60) s< 0)
                ebx_1 = 1
                var_8_1 = 1
            else if (sub_437ca7(&var_3c, &var_60, &var_14) s< 0)
                ebx_1 = 1
                var_8_1 = 1
            else
                int32_t var_28
                
                if (sub_437498(var_28, var_14) != 0)
                    ebx_1 = 1
                
                int32_t var_4c
                
                if (sub_437498(var_14, var_4c) != 0)
                    var_8_1 = 1
        
        if (ebx_1 != 0 && var_8_1 != 0)
            break
        
        edi_1 += 1
        
        if (edi_1 u>= eax)
            break

int32_t result

result = eax_1 u>= eax ? result_1 : 4

if (ebx_1 != 0)
    result += 0x200

if (var_8_1 != 0)
    result += 0x10000

if (eax u>= eax_1)
    return result

return result + 0x800000
