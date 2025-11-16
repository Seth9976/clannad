// 函数: sub_48287a
// 地址: 0x48287a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t* eax = *(arg1 + 0xc)
int32_t edi
int32_t var_14 = edi
int32_t i = 0
int32_t ebx = 1

if (*eax u> 0)
    do
        int32_t* eax_2 = *(eax[3] + (i << 2))
        int32_t ecx = *eax_2
        
        if (ecx == 0)
            char* eax_3 = eax_2[1]
            
            if (eax_3 == 0)
                return 0x88760391
            
            int32_t result = sub_482665(arg2, arg1, eax_3, &var_8)
            
            if (result s< 0)
                return result
            
            ebx *= var_8
        else
            ebx *= ecx
        
        eax = *(arg1 + 0xc)
        i += 1
    while (i u< *eax)

*arg3 = ebx
return 0
