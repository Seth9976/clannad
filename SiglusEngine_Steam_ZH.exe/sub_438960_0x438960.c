// 函数: sub_438960
// 地址: 0x438960
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t ebx = 0

if (arg4 != 0)
    *arg4 = 0

if (arg5 != 0)
    *arg5 = 0

void* i = arg3
int32_t edx = 0

if (i != 0)
    do
        void* ecx = *(i + 8)
        
        if (ecx == 0)
            break
        
        if (*(ecx + 4) != 0xd)
            break
        
        void* ecx_1 = *(ecx + 0x10)
        
        if (ecx_1 == 0)
            break
        
        if (*(ecx_1 + 4) != 9)
            break
        
        i = *(i + 0xc)
        edx += 1
    while (i != 0)
    
    if (i != 0 || edx u> 4)
        return 1

char* eax_3 = *(arg2 + 8)
uint32_t var_8_1 = 0x5e
int32_t edi
int32_t var_170_1 = edi

while (true)
    char* edi_1 = eax_3
    uint32_t eax_6 = (var_8_1 + ebx) u>> 1
    char* esi_1 = (&data_abc1a4)[eax_6 * 0x29]
    int32_t ecx_5
    
    while (true)
        edx.b = *edi_1
        int32_t ecx_3
        ecx_3.b = edx.b
        char temp1_1 = *esi_1
        bool c_1 = edx.b u< temp1_1
        
        if (edx.b == temp1_1)
            if (ecx_3.b == 0)
                ecx_5 = 0
                break
            
            edx.b = edi_1[1]
            ecx_3.b = edx.b
            char temp5_1 = esi_1[1]
            c_1 = edx.b u< temp5_1
            
            if (edx.b == temp5_1)
                edi_1 = &edi_1[2]
                esi_1 = &esi_1[2]
                
                if (ecx_3.b != 0)
                    continue
                
                ecx_5 = 0
                break
        
        bool c_2 = unimplemented  {sbb ecx, ecx}
        ecx_5 = sbb.d(sbb.d(ecx_3, ecx_3, c_1), 0xffffffff, c_2)
        break
    
    if (ecx_5 s<= 0)
        if (ecx_5 s>= 0)
            ebx = eax_6
            var_8_1 = eax_6 + 1
            uint32_t ecx_6
            
            if (eax_6 u> 0)
                void* edi_3 = eax_6 * 0xa4 + &data_abc100
                
                while (true)
                    char* ecx_7 = *edi_3
                    char* esi_3 = eax_3
                    
                    while (true)
                        int32_t eax_7
                        eax_7.b = *esi_3
                        edx.b = eax_7.b
                        char temp7_1 = *ecx_7
                        bool c_3 = eax_7.b u< temp7_1
                        
                        if (eax_7.b == temp7_1)
                            if (edx.b == 0)
                                ecx_6 = 0
                                break
                            
                            eax_7.b = esi_3[1]
                            edx.b = eax_7.b
                            char temp13_1 = ecx_7[1]
                            c_3 = eax_7.b u< temp13_1
                            
                            if (eax_7.b == temp13_1)
                                esi_3 = &esi_3[2]
                                ecx_7 = &ecx_7[2]
                                
                                if (edx.b != 0)
                                    continue
                                
                                ecx_6 = 0
                                break
                        
                        bool c_4 = unimplemented  {sbb ecx, ecx}
                        ecx_6 = sbb.d(sbb.d(ecx_7, ecx_7, c_3), 0xffffffff, c_4)
                        break
                    
                    if (ecx_6 != 0)
                        break
                    
                    ebx -= 1
                    edi_3 -= 0xa4
                    
                    if (ebx u<= 0)
                        break
            
            if (var_8_1 u< 0x5e)
                void* edi_6 = &(&data_abc1a4)[var_8_1 * 0x29]
                
                while (true)
                    char* eax_8 = *edi_6
                    char* esi_5 = eax_3
                    int32_t eax_11
                    
                    while (true)
                        edx.b = *esi_5
                        ecx_6.b = edx.b
                        char temp8_1 = *eax_8
                        bool c_5 = edx.b u< temp8_1
                        
                        if (edx.b == temp8_1)
                            if (ecx_6.b == 0)
                                eax_11 = 0
                                break
                            
                            edx.b = esi_5[1]
                            ecx_6.b = edx.b
                            char temp14_1 = eax_8[1]
                            c_5 = edx.b u< temp14_1
                            
                            if (edx.b == temp14_1)
                                esi_5 = &esi_5[2]
                                eax_8 = &eax_8[2]
                                
                                if (ecx_6.b != 0)
                                    continue
                                
                                eax_11 = 0
                                break
                        
                        bool c_6 = unimplemented  {sbb eax, eax}
                        eax_11 = sbb.d(sbb.d(eax_8, eax_8, c_5), 0xffffffff, c_6)
                        break
                    
                    if (eax_11 != 0)
                        break
                    
                    var_8_1 += 1
                    edi_6 += 0xa4
                    
                    if (var_8_1 u>= 0x5e)
                        break
            
            break
        
        var_8_1 = eax_6
    else
        ebx = eax_6 + 1
    
    if (ebx u>= var_8_1)
        break

int32_t result

if (ebx == var_8_1)
    result = 1
else
    uint32_t var_14_2 = ebx
    int32_t var_54
    int32_t var_40
    int32_t var_2c
    
    if (ebx u< var_8_1)
        void* var_10_1 = ebx * 0xa4 + &data_abc1a0
        
        do
            var_54 = 0xffffffff
            void var_50
            void* edi_7 = &var_50
            *edi_7 = 0xffffffff
            void* edi_8 = edi_7 + 4
            *edi_8 = 0xffffffff
            void* edi_9 = edi_8 + 4
            *edi_9 = 0xffffffff
            *(edi_9 + 4) = 0xffffffff
            var_2c = 0x1e
            void var_28
            void* edi_12 = &var_28
            *edi_12 = 0x1e
            void* edi_13 = edi_12 + 4
            *edi_13 = 0x1e
            void* edi_14 = edi_13 + 4
            void* esi_7 = var_10_1
            *edi_14 = 0x1e
            *(edi_14 + 4) = 0x1e
            var_40 = 5
            void var_3c
            void* edi_17 = &var_3c
            *edi_17 = 5
            void* edi_18 = edi_17 + 4
            *edi_18 = 5
            void* edi_19 = edi_18 + 4
            *edi_19 = 5
            *(edi_19 + 4) = 5
            void** var_8c
            sub_46bb94(&var_8c)
            void** var_b0
            sub_46bb94(&var_b0)
            void* ebx_3 = arg3
            int32_t i_2 = 1
            int32_t __saved_ebp
            
            if (ebx_3 == 0)
            label_438c82:
                
                if (*(esi_7 + 8) != 0)
                    void* eax_34 = &(&__saved_ebp)[*(esi_7 + 0xc) - 0xf]
                    
                    if (*eax_34 == 5)
                        *eax_34 = **(esi_7 + 0x10)
                    
                    void* eax_36 = &(&__saved_ebp)[*(esi_7 + 0x14) - 0xa]
                    
                    if (*eax_36 == 0x1e)
                        *eax_36 = **(esi_7 + 0x18)
                
                int32_t i_1 = 0
                void* ebx_5 = var_10_1 + 0x18
                
                do
                    int32_t* eax_37 = *(ebx_5 - 8)
                    int32_t esi_9 = (&__saved_ebp)[i_1 - 0xf]
                    
                    if (esi_9 != 5)
                        int32_t edx_2
                        
                        if (esi_9 == 0)
                            edx_2 = *eax_37
                        
                        if (esi_9 == 0 && (edx_2 == 1 || edx_2 == 2))
                            (&__saved_ebp)[i_1 - 0xf] = edx_2
                        else
                            while (true)
                                int32_t ecx_28 = *eax_37
                                
                                if (ecx_28 == 5)
                                    break
                                
                                if (esi_9 == ecx_28)
                                    break
                                
                                eax_37 = &eax_37[1]
                        
                        if (*eax_37 == 5)
                            break
                    else if (eax_37 != 0)
                        (&__saved_ebp)[i_1 - 0xf] = *eax_37
                    
                    int32_t* esi_10 = *ebx_5
                    int32_t edi_23 = (&__saved_ebp)[i_1 - 0xa]
                    int32_t* eax_39 = esi_10
                    
                    if (edi_23 != 0x1e)
                        while (true)
                            int32_t edx_3 = *eax_39
                            
                            if (edx_3 == 0x1e)
                                break
                            
                            if (edi_23 == edx_3)
                                break
                            
                            eax_39 = &eax_39[1]
                        
                        if (*eax_39 == 0x1e)
                            (&__saved_ebp)[i_1 - 0xa] = *esi_10
                    else if (eax_39 != 0)
                        (&__saved_ebp)[i_1 - 0xa] = *eax_39
                    
                    if ((&__saved_ebp)[i_1 - 0x14] == 0xffffffff)
                        (&__saved_ebp)[i_1 - 0x14] = 1
                    
                    i_1 += 1
                    ebx_5 += 0x20
                while (i_1 u< 5)
                
                if (i_1 == 5)
                    break
            else
                void* edi_22 = esi_7 + 0x2c
                
                while (i_2 u< 5)
                    if (*(edi_22 - 8) == 0)
                        break
                    
                    void* esi_8 = *(*(ebx_3 + 8) + 0x10)
                    int32_t eax_14 = (&var_40)[*edi_22]
                    int32_t ecx_12
                    
                    if (eax_14 != 5 && eax_14 == 0)
                        ecx_12 = *(esi_8 + 0x10)
                    
                    int32_t var_68[0x4]
                    
                    if (eax_14 == 5 || (eax_14 == 0 && (ecx_12 == 1 || ecx_12 == 2)))
                        *edi_22
                        (&var_40)[*edi_22] = *(esi_8 + 0x10)
                        var_68[*edi_22] = *(edi_22 + 4)
                    else
                        int32_t ecx_13 = *(esi_8 + 0x10)
                        bool cond:11_1
                        
                        if (ecx_13 != 0)
                            cond:11_1 = ecx_13 != eax_14
                        label_438b8b:
                            
                            if (cond:11_1)
                                break
                        else if (eax_14 != 0 && eax_14 != 1)
                            cond:11_1 = eax_14 != 2
                            goto label_438b8b
                    
                    int32_t eax_17 = *(edi_22 + 8)
                    
                    if ((&var_2c)[eax_17] != 0x1e)
                        int32_t var_78_1 = (&var_2c)[eax_17]
                        int32_t var_9c_1 = *(esi_8 + 0x14)
                        
                        if (sub_437ca7(&var_8c, &var_b0, &(&__saved_ebp)[*(edi_22 + 8) - 0xa]) s< 0)
                            break
                    else
                        (&var_2c)[eax_17] = *(esi_8 + 0x14)
                        var_68[eax_17] = *(edi_22 + 0xc)
                    
                    int32_t edx_1 = *(esi_8 + 0x10)
                    
                    if (edx_1 != 0)
                        int32_t eax_24 = *(edi_22 + 0x10)
                        
                        if (eax_24 s< 0)
                            int32_t ecx_19 = *(esi_8 + 0x18)
                            
                            if ((&__saved_ebp)[not.d(eax_24) - 0x14] u> ecx_19)
                                (&__saved_ebp)[not.d(eax_24) - 0x14] = ecx_19
                        else if (*(esi_8 + 0x18) u< eax_24)
                            break
                        
                        if (edx_1 != 0)
                            int32_t eax_27 = *(edi_22 + 0x14)
                            
                            if (eax_27 s< 0)
                                int32_t ecx_20 = *(esi_8 + 0x1c)
                                
                                if ((&__saved_ebp)[not.d(eax_27) - 0x14] u> ecx_20)
                                    (&__saved_ebp)[not.d(eax_27) - 0x14] = ecx_20
                            else if (*(esi_8 + 0x1c) u< eax_27)
                                break
                    
                    if ((*(edi_22 - 4) & 0x20) != 0 && sub_437693(arg1, esi_8) != 0)
                        break
                    
                    ebx_3 = *(ebx_3 + 0xc)
                    i_2 += 1
                    edi_22 += 0x20
                    
                    if (ebx_3 == 0)
                        break
                
                if (ebx_3 == 0)
                    esi_7 = var_10_1
                    
                    if (i_2 u>= 5 || *((i_2 << 5) + esi_7 + 4) == ebx_3)
                        goto label_438c82
            var_14_2 += 1
            var_10_1 += 0xa4
        while (var_14_2 u< var_8_1)
    
    uint32_t edi_26 = var_14_2
    
    if (edi_26 == var_8_1)
        result = 1
    else if (arg4 == 0)
    label_438fb3:
        void*** esi_19 = nullptr
        
        if (arg5 == 0)
            result = 0
        else
            void*** eax_67 = sub_42cfa1(0x14)
            
            if (eax_67 != 0)
                esi_19 = sub_46b602(eax_67, 0, 0, "Values")
            
            if (esi_19 == 0)
            labelid_8:
                result = 0x8007000e
            else
                void*** eax_69 = sub_42cfa1(0x40)
                void*** eax_70
                
                if (eax_69 == 0)
                    eax_70 = nullptr
                else
                    eax_70 = sub_46c032(eax_69, 2, *(edi_26 * 0xa4 + &data_abc1a0), arg2)
                
                esi_19[2] = eax_70
                
                if (eax_70 == 0)
                label_439011:
                    result = 0x8007000e
                else
                    *arg5 = esi_19
                    result = 0
    else
        void var_164
        void* esi_11 = &var_164
        int32_t i_4 = 5
        int32_t i_3
        
        do
            sub_46bb94(esi_11)
            esi_11 += 0x24
            i_3 = i_4
            i_4 -= 1
        while (i_3 != 1)
        int32_t edi_24 = 0
        void* ebx_7 = var_14_2 * 0xa4
        int32_t var_14c
        int32_t* eax_44 = &var_14c
        int32_t* ecx_32 = ebx_7 + 0xabc1bc
        
        while (ecx_32[-6] != 0)
            void* edx_4 = ecx_32[-5]
            
            if (edx_4 != 0)
                eax_44[-2] = (&var_40)[ecx_32[-4]]
                eax_44[-1] = (&var_2c)[ecx_32[-2]]
                int32_t edx_9 = *ecx_32
                
                if (edx_9 s< 0)
                    edx_9 = (&var_54)[not.d(edx_9)]
                
                *eax_44 = edx_9
                int32_t edx_11 = ecx_32[1]
                
                if (edx_11 s< 0)
                    edx_11 = (&var_54)[not.d(edx_11)]
                
                void* esi_13 = edx_4 & 0xc00
                eax_44[1] = edx_11
                eax_44[2] = esi_13
                
                if (edi_24 == 0 || (edx_4.b & 0x20) == 0)
                    eax_44[2] = esi_13 | 0x200
            
            edi_24 += 1
            ecx_32 = &ecx_32[8]
            eax_44 = &eax_44[9]
            
            if (edi_24 u>= 5)
                break
        
        int32_t var_154
        int32_t var_148
        
        if ((var_154 == 1 || var_154 == 2) && var_148 == 1 && var_14c == 1)
            int32_t var_154_1 = 0
        
        void*** eax_45 = sub_42cfa1(0x40)
        void*** var_8_2
        void*** esi_15
        
        if (eax_45 == 0)
            var_8_2 = nullptr
            esi_15 = nullptr
        else
            esi_15 = sub_46bc38(eax_45)
            var_8_2 = esi_15
        
        if (esi_15 == 0)
        label_439011_1:
            result = 0x8007000e
        else
            void*** eax_47
            
            if (*(ebx_7 + &data_abc1a8) != 0)
                eax_47 = sub_46c5e8(&var_164)
                esi_15[8] = eax_47
            
            if (*(ebx_7 + &data_abc1a8) == 0 || eax_47 != 0)
                void* esi_16 = &esi_15[9]
                void** var_10_2 = esi_16
                int32_t var_c_1 = 1
                void var_124
                void* edi_25 = &var_124
                arg3 = ebx_7 + &data_abc1c4
                
                while (true)
                    if (*arg3 != 0)
                        void*** eax_50 = sub_42cfa1(0x14)
                        void*** eax_51
                        
                        if (eax_50 == 0)
                            eax_51 = nullptr
                        else
                            eax_51 = sub_46b602(eax_50, 0, 0, "Decls")
                        
                        *esi_16 = eax_51
                        
                        if (eax_51 == 0)
                            goto label_439011_2
                        
                        void*** eax_52 = sub_42cfa1(0x30)
                        void*** ebx_8
                        
                        if (eax_52 == 0)
                            ebx_8 = nullptr
                        else
                            ebx_8 = sub_46b9d6(eax_52, 1, 0, 0, 0)
                        
                        if (ebx_8 == 0)
                            goto label_439011_2
                        
                        *(*var_10_2 + 8) = ebx_8
                        void*** eax_56 = sub_42cfa1(0x30)
                        void*** eax_57
                        
                        if (eax_56 == 0)
                            eax_57 = nullptr
                        else
                            eax_57 = sub_46b809(eax_56, arg2)
                        
                        ebx_8[5] = eax_57
                        
                        if (eax_57 == 0)
                            goto label_439011_2
                        
                        eax_57[6] = *arg3
                        void*** eax_58 = sub_42cfa1(0x40)
                        void*** esi_17
                        
                        if (eax_58 == 0)
                            esi_17 = nullptr
                        else
                            esi_17 = sub_46bd30(eax_58)
                        
                        if (esi_17 == 0)
                            goto label_439011_2
                        
                        ebx_8[6] = esi_17
                        esi_17[4] = 0xffffffff
                        esi_17[5] = *(edi_25 - 4) * *edi_25
                        esi_17[6] = 2
                        esi_17[7] = *(arg3 + 4)
                        void*** eax_64 = sub_46c5e8(edi_25 - 0x1c)
                        esi_17[8] = eax_64
                        
                        if (eax_64 == 0)
                            goto label_439011_2
                        
                        arg3 += 0x20
                        esi_16 = *var_10_2 + 0xc
                        var_c_1 += 1
                        edi_25 += 0x24
                        var_10_2 = esi_16
                        
                        if (var_c_1 u< 5)
                            continue
                    
                    edi_26 = var_14_2
                    *arg4 = var_8_2
                    break
                
                goto label_438fb3
            
        label_439011_2:
            result = 0x8007000e

return result
