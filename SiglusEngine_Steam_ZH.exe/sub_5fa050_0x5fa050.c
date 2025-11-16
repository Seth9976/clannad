// 函数: sub_5fa050
// 地址: 0x5fa050
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg2
void* var_1c = arg1

if (result s< arg3)
    int32_t edi_1 = result * 0x164
    int32_t i_1 = arg3 - result
    int32_t i
    
    do
        int32_t* esi_2 = *(arg1 + 0xa4) + edi_1
        void** eax = &esi_2[3]
        *esi_2 = 0
        esi_2[2] = 0
        bool cond:0_1 = eax[5] u< 8
        eax[4] = 0
        
        if (not(cond:0_1))
            eax = *eax
        
        *eax = nullptr
        esi_2[0x28] = 0
        sub_5be920(&esi_2[0x29])
        result = esi_2[1]
        esi_2[0x57] = 0
        
        if (result == 0xb)
            void var_18
            int32_t* esi_3 = *sub_58c590(&var_18, &esi_2[0x58])
            int32_t* var_14
            
            if (var_14 != 0)
                bool cond:1_1 = var_14[1] != 1
                var_14[1]
                var_14[1] -= 1
                
                if (not(cond:1_1))
                    (*(*var_14 + 4))()
                    bool cond:3_1 = var_14[2] != 1
                    var_14[2]
                    var_14[2] -= 1
                    
                    if (not(cond:3_1))
                        (*(*var_14 + 8))()
            
            result = sub_55b2b0(esi_3)
        else if (result == 0x15)
            void var_10
            int32_t* esi_5 = *sub_58c640(&var_10, &esi_2[0x58])
            int32_t* var_c
            
            if (var_c != 0)
                bool cond:2_1 = var_c[1] != 1
                var_c[1]
                var_c[1] -= 1
                
                if (not(cond:2_1))
                    (*(*var_c + 4))()
                    bool cond:4_1 = var_c[2] != 1
                    var_c[2]
                    var_c[2] -= 1
                    
                    if (not(cond:4_1))
                        (*(*var_c + 8))()
            
            result = sub_55b650(esi_5)
        
        arg1 = var_1c
        edi_1 += 0x164
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
