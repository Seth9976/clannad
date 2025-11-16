// 函数: sub_6a4eb0
// 地址: 0x6a4eb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax

if (arg2 s>= 0)
    eax = data_bac510
    
    if (*(eax + 0x10b90) + *(eax + 0x10b8c) + *(eax + 0x10b88) s> arg2)
        int32_t esi_1 = arg2 * 0xc
        int32_t* eax_2 = *arg1 + esi_1
        *eax_2 = 0
        int32_t* esi_2 = eax_2[1]
        eax_2[1] = 0
        
        if (esi_2 != 0)
            bool cond:0_1 = esi_2[1] != 1
            esi_2[1]
            esi_2[1] -= 1
            
            if (not(cond:0_1))
                (*(*esi_2 + 4))()
                int32_t ebx_1 = esi_2[2]
                esi_2[2] -= 1
                
                if (ebx_1 == 1)
                    (*(*esi_2 + 8))()
        
        *(esi_1 + *arg1 + 8) = 0
        int32_t eax_7
        eax_7.b = 1
        arg1[3] = 0xffffffff
        arg1[4] = 0xffffffff
        return eax_7

eax.b = 0
return eax
