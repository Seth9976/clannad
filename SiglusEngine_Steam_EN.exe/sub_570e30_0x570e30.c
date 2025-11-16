// 函数: sub_570e30
// 地址: 0x570e30
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t* esi = &data_20f02a0
LRESULT result

for (WPARAM wParam = 0; wParam s< 0xa; )
    result = *esi
    
    if (esi[8] != result)
        esi[8] = result
        int32_t lParam = 1
        void var_28
        
        if (result == 0xffffffff)
            char const* const eax_2 = "????"
            void* edx_1 = &var_28
            
            do
                char const ecx = *eax_2
                
                if (ecx u< 0x80)
                label_570eac:
                    *edx_1 = ecx
                    edx_1 += 1
                    eax_2 = &eax_2[1]
                else
                    if (ecx u< 0xa0)
                        if (ecx u>= 0xfe)
                            goto label_570eac
                    else if (ecx u<= 0xdf || ecx u>= 0xfe)
                        goto label_570eac
                    
                    *edx_1 = ecx
                    *(edx_1 + 1) = eax_2[1]
                    edx_1 += 2
                    eax_2 = &eax_2[2]
            while (*eax_2 != 0)
            
            *edx_1 = 0
        else
            LRESULT result_1 = result
            sub_4c84d0(&var_28, "%04d")
        
        void* var_38_1 = &var_28
        result = SendMessageA(GetDlgItem(data_1af0a8c, 0x4fe3), 0x1306, wParam, &lParam)
    
    wParam += 1
    esi = &esi[9]

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
