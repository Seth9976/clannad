// 函数: sub_482b23
// 地址: 0x482b23
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t edi
int32_t var_c = edi
int32_t eax = *(arg1 + 0x40)

if (eax == 0)
    sub_482812(arg1)
    sub_4827e1(arg1)
    sub_482795(arg1, arg2)
else if (eax == 1)
    var_8:2.b = 0x22
    var_8:3.b = 0x5c
    sub_460633(arg1, 1, &var_8:2)
    char* eax_3 = arg2
    char* esi_1 = eax_3
    
    if (*eax_3 != 0)
        do
            int32_t ecx
            ecx.b = *esi_1
            
            if (ecx.b == 0x22 || ecx.b == 0x27 || ecx.b == 0x5c)
                if (esi_1 != eax_3)
                    sub_460633(arg1, esi_1 - eax_3, eax_3)
                
                sub_460633(arg1, 1, &var_8:3)
                eax_3 = esi_1
            else if (ecx.b s< 0x1e || ecx.b s> 0x7e)
                ecx = sx.d(ecx.b)
                
                if (ecx s< 0x80 || ecx s> 0xfe)
                    if (esi_1 != eax_3)
                        sub_460633(arg1, esi_1 - eax_3, eax_3)
                    
                    uint32_t var_14_3 = zx.d(*esi_1)
                    sub_4605e0(arg1, "\%o")
                    sub_460633(arg1, 1, &var_8:3)
                    eax_3 = esi_1
                    
                    if (esi_1[1] != 0)
                        esi_1 = &esi_1[1]
            
            esi_1 = &esi_1[1]
        while (*esi_1 != 0)
        
        if (esi_1 != eax_3)
            sub_460633(arg1, esi_1 - eax_3, eax_3)
    
    sub_460633(arg1, 1, &var_8:2)

return 0
