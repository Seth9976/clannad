// 函数: sub_482665
// 地址: 0x482665
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = *(arg1 + 0x1c)
int32_t edi
int32_t var_10 = edi
int32_t i = 0

if (*eax u> 0)
    do
        int32_t* esi_1 = *(eax[3] + (i << 2))
        
        if (esi_1 == arg2)
            break
        
        if (2 == CompareStringA(0x409, 1, *esi_1, 0xffffffff, arg3, 0xffffffff))
            void* eax_5 = esi_1[1]
            
            if (eax_5 != 0)
                int32_t eax_6 = *(eax_5 + 4)
                
                if (eax_6 == 0)
                label_4826ee:
                    *arg4 = zx.d(*esi_1[4])
                    return 0
                
                if (eax_6 == 1)
                label_4826df:
                    *arg4 = *esi_1[4]
                    return 0
                
                if (eax_6 s> 3)
                    if (eax_6 s<= 5)
                        *arg4 = zx.d(*esi_1[4])
                        return 0
                    
                    if (eax_6 == 6)
                        goto label_4826ee
                    
                    if (eax_6 == 7)
                        goto label_4826df
            
            break
        
        eax = *(arg1 + 0x1c)
        i += 1
    while (i u< *eax)

return 0x88760392
