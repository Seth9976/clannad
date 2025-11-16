// 函数: sub_41e620
// 地址: 0x41e620
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
HWND result = nullptr
void* var_110 = &data_f899ac
HWND result_1 = nullptr
void* esi = &data_925298
void* i = &data_925270
void* ecx = &data_f899ac

do
    if (*(esi - 0x28) != 0)
        void string
        sub_4d1c30(result, esi + 8, &string, 0x101)
        sub_41dfa0(result, *(esi - 0x24), result, *(esi - 0x20), *(esi - 0x1c), *(esi - 0x18), 
            *(esi + 4), *(esi - 0x14), *(esi - 0x10), *(esi - 0xc), *(esi - 8), *(esi - 4), *esi)
        result = result_1
        ecx = var_110
        
        if (result u<= 0xf && *i != 0 && *ecx != 0)
            SetDlgItemTextA(data_7027bc, *((result << 2) + &data_6105f0), &string)
            result = result_1
            ecx = var_110
    
    result = &result->unused + 1
    i += 0x134
    ecx += 0x14
    result_1 = result
    esi += 0x134
    var_110 = ecx
while (i s< &data_9265b0)

int32_t ecx_3 = data_92526c

if (ecx_3 != 0xffffffff)
    result = sub_41e930(ecx_3)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
