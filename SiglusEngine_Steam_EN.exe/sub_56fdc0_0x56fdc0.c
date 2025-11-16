// 函数: sub_56fdc0
// 地址: 0x56fdc0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 s>= 0)
    int32_t i_3 = data_1be4afc
    
    if (arg1 s< i_3)
        int32_t* esi_1 = data_1be4b04
        
        if (i_3 s> 0)
            int32_t i
            
            do
                int32_t eax_1 = *esi_1
                
                if (eax_1 s>= 0)
                    *esi_1 = eax_1 - 1
                
                esi_1 = &esi_1[0x9ce6a]
                i = i_3
                i_3 -= 1
            while (i != 1)
            esi_1 = data_1be4b04
        
        int32_t i_1 = data_1be4af8 + arg1
        
        for (int32_t ecx = data_1be4b00; i_1 s>= ecx; i_1 -= ecx)
        
        void* edx_2 = i_1 * 0x2739a8 + esi_1
        *edx_2 = 2
        sub_4d1c30(i_1, edx_2 + 0x18, 0x187c728, 0x273990)
        sub_4cfd70(0x187c628, 0x623fb4)
        
        for (int32_t i_2 = 0; i_2 s< 0x10; i_2 += 1)
            sub_41e520(i_2, 0)
        
        sub_41df00()
        int32_t eax_4 = sub_49d030()
        int32_t var_44 = 0x1869e
        int32_t var_40_1 = 0
        data_71929c = 0x16
        sub_4d1c30(eax_4, &var_44, &data_7192a0, 0x40)
        data_7192e0 = 0
        data_1332b30 = 0
        data_1321ecc = 0
        data_1332b34 = 0
        data_1332b3c = 0
        data_1332b38 = 0

return SetFocus(data_7027bc)
