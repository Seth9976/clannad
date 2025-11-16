// 函数: sub_5aa4a0
// 地址: 0x5aa4a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ecx = data_bac460
int32_t* eax_2 = sub_548970(ecx + 4, *(ecx + 0xb8) - 1, 1)

if (arg1 s>= 0)
    eax_2 = (eax_2[0x52] - eax_2[0x51]) s/ 0x16c
    
    if (arg1 s< eax_2)
        void* ecx_4 = data_bac460
        eax_2 = sub_548970(ecx_4 + 4, *(ecx_4 + 0xb8) - 1, 1)
        int32_t esi_1 = arg1 * 0x16c
        void* esi_2 = esi_1 + eax_2[0x51]
        
        if (esi_1 != neg.d(eax_2[0x51]))
            eax_2 = *(esi_2 + 4)
            
            if (eax_2 == 0xa)
                int32_t eax_8 = sub_6ae470(arg2, 0)
                *(esi_2 + 8) = eax_8
                return eax_8
            
            if (eax_2 == 0x14)
                eax_2 = arg2
                
                if (esi_2 + 0xc != eax_2)
                    return sub_52e3c0(esi_2 + 0xc, eax_2, 0, 0xffffffff)

return eax_2
