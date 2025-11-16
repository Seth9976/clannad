// 函数: sub_41e730
// 地址: 0x41e730
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
uint32_t result = 0xffffffff
void* var_114 = &data_f899b8
HWND result_2 = nullptr
void* var_110 = &data_f899ac
void* edi = &data_925294
void* i = &data_925270
void* ecx = &data_f899ac
void* edx = &data_f899b8

do
    if (*(edi - 0x24) != 0)
        if (*edx != 0)
            result = result_2
        
        uint32_t result_1 = result
        uint8_t string[0x104]
        
        if (result_2 u<= 0xf)
            bool cond:0_1 = *i == 0
            string[0] = 0
            
            if (not(cond:0_1) && *ecx != 0)
                result =
                    GetDlgItemTextA(data_7027bc, *((result_2 << 2) + &data_6105f0), &string, 0x101)
        
        sub_41dfa0(result, *(edi - 0x20), result_2, *(edi - 0x1c), *(edi - 0x18), *(edi - 0x14), 
            *(edi + 8), *(edi - 0x10), *(edi - 0xc), *(edi - 8), *(edi - 4), *edi, *(edi + 4))
        
        if (result_2 u<= 0xf && *i != 0 && *var_110 != 0)
            SetDlgItemTextA(data_7027bc, *((result_2 << 2) + &data_6105f0), &string)
        
        edx = var_114
        ecx = var_110
        result = result_1
    
    edx += 0x14
    i += 0x134
    ecx += 0x14
    var_114 = edx
    edi += 0x134
    var_110 = ecx
    result_2 = &result_2->unused + 1
while (i s< &data_9265b0)

if (result != 0xffffffff)
    result = sub_41e930(result)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
