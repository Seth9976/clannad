// 函数: sub_4a6e80
// 地址: 0x4a6e80
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax

if (data_1372c24.b != 0 && data_1372c24:1.b != 0 && arg1 u<= 0xf)
    eax = data_1372c20
    
    if (eax u<= 7)
        int32_t eax_2
        
        if (*(eax * 0xfcc + 0x129aa8c + (arg1 + 5) * 0x14) != 0)
            eax_2 = arg1 * 5
            int32_t ecx = *(eax * 0xfcc + 0x129aa8c + (eax_2 << 2) + 0x70)
            
            if (ecx s> 0)
                int32_t edx_1 = *(eax * 0xfcc + 0x129aa8c + (eax_2 << 2) + 0x74)
                
                if (edx_1 s> 0)
                    int32_t esi_3 = *(eax * 0xfcc + 0x129aa8c + (eax_2 << 2) + 0x68) + data_1374070
                    int32_t ecx_3 = *(eax * 0xfcc + 0x129aa8c + (eax_2 << 2) + 0x6c) + data_1374074
                    
                    if (data_131d2cc s>= esi_3 && data_131d2cc s<= ecx - 1 + esi_3
                            && data_1320e58 s>= ecx_3 && data_1320e58 s<= ecx_3 - 1 + edx_1)
                        eax_2.b = 1
                        return eax_2
        
        eax_2.b = 0
        return eax_2

eax.b = 0
return eax
