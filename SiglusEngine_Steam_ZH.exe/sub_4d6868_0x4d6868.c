// 函数: sub_4d6868
// 地址: 0x4d6868
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_58 = edi
*(arg1 + 0x104) = 0
int32_t var_40_1
__builtin_memset(&var_40_1, 0, 0x34)
void* eax
int16_t x87control
eax, x87control = sub_4b2406(arg1, arg2)
int32_t var_38_1
int32_t var_34_1
int32_t* var_30_1
int32_t var_2c_1
int32_t var_24_1
int32_t* var_20_1
int32_t* var_1c_1
int32_t* var_18_1

if (eax s>= 0)
    int32_t eax_1 = sub_49f4eb(arg1, 0xabff18, 0x40311, 0xffffffff, 4)
    *(arg1 + 0x184) = eax_1
    
    if (eax_1 != 0xffffffff && (*(*arg1 + 0xa0))() == 0)
        int32_t* eax_4 = *(arg1 + 0x1b0)
        *(arg1 + 0x10c) = 0
        *(arg1 + 0x110) = 0
        *(arg1 + 0x114) = 0
        *(arg1 + 0x11c) = 0
        *(arg1 + 0x120) = 0
        
        if (eax_4 != 0)
            (*(*eax_4 + 8))(eax_4)
            *(arg1 + 0x1b0) = 0
        
        void* edi_1
        
        if ((*(arg1 + 0xcc) & 2) != 0)
        label_4d697e:
            
            if ((*(arg1 + 0xcc) & 1) == 0)
                goto label_4d69b6
            
            int32_t eax_11 = sub_745f3f(*(arg1 + 0xc) * 0x30)
            *(arg1 + 0x124) = eax_11
            
            if (eax_11 != 0)
                int32_t eax_13 = *(arg1 + 0xc) << 1
                *(arg1 + 0x128) = 0
                *(arg1 + 0x12c) = eax_13
            label_4d69b6:
                *(arg1 + 0x138) = 0xffffffff
                int32_t i = 0
                bool cond:2_1 = *(arg1 + 8) u<= 0
                *(arg1 + 0x14c) = 0
                
                if (not(cond:2_1))
                    do
                        void* ecx_6 = *(*(arg1 + 0x14) + (i << 2))
                        i += 1
                        *(ecx_6 + 0x30) = 0
                    while (i u< *(arg1 + 8))
                
                int32_t var_8_1 = 0
                int32_t i_1 = 0
                
                if (*(arg1 + 8) u> 0)
                    do
                        void* eax_15 = *(*(arg1 + 0x14) + (i_1 << 2))
                        void* edi_2 = *(*(arg1 + 0x10) + (*(eax_15 + 4) << 2))
                        int16_t ecx_9 = (*(edi_2 + 4)).w
                        
                        if ((ecx_9.b & 0x10) == 0)
                            if ((ecx_9.b & 0x20) != 0)
                                (*(*arg1 + 4))(eax_15, 0)
                        else if ((ecx_9:1.b & 2) == 0 || (ecx_9.b & 0x20) != 0)
                            (*(*arg1 + 4))(eax_15, 0)
                        
                        if ((*(edi_2 + 4) & 0x80) != 0)
                            var_8_1 += 1
                        
                        i_1 += 1
                    while (i_1 u< *(arg1 + 8))
                
                int32_t var_4c
                
                if (var_8_1 u<= *(arg1 + 0x4c))
                    if ((*(arg1 + 0xc8) & 0xffff0000) == 0xfffe0000)
                        edi_1 = sub_4c7be2(arg1, *(arg1 + 0x80), *(arg1 + 0x28), 0x10, 0x204, 0x76)
                    
                    if ((*(arg1 + 0xc8) & 0xffff0000) != 0xfffe0000 || edi_1 s>= 0)
                        if ((*(arg1 + 0xc8) & 0xffff0000) == 0xffff0000)
                            edi_1 = sub_4c7be2(arg1, 0xffffffff, *(arg1 + 0x4c), 0x80, 0, 0x73)
                        
                        if ((*(arg1 + 0xc8) & 0xffff0000) != 0xffff0000 || edi_1 s>= 0)
                            void*** i_13
                            int32_t var_28_1
                            void*** i_17
                            void*** i_18
                            
                            if (*(arg1 + 8) u> 0)
                                int32_t* edi_3 = *(arg1 + 0x14)
                                int32_t i_15 = *(arg1 + 8)
                                int32_t i_2
                                
                                do
                                    void* eax_23 = *edi_3
                                    int32_t ecx_17 = *(eax_23 + 4)
                                    void*** i_21
                                    
                                    if (*(arg1 + 0x88) == ecx_17)
                                        i_21 = *(eax_23 + 0xc) + 1
                                    
                                    if (*(arg1 + 0x88) != ecx_17 || i_21 u<= i_13)
                                        void*** i_23
                                        
                                        if (*(arg1 + 0x80) == ecx_17)
                                            i_23 = *(eax_23 + 0xc) + 1
                                        
                                        if (*(arg1 + 0x80) != ecx_17 || i_23 u<= i_17)
                                            void*** i_24
                                            
                                            if (*(arg1 + 0x84) == ecx_17)
                                                i_24 = *(eax_23 + 0xc) + 1
                                            
                                            if (*(arg1 + 0x84) == ecx_17 && i_24 u> i_18)
                                                i_18 = i_24
                                            else if ((*(*(*(arg1 + 0x10) + (ecx_17 << 2)) + 4)
                                                    & 0x80) != 0)
                                                int32_t eax_25 = *(eax_23 + 0xc) + 1
                                                
                                                if (eax_25 u> var_28_1)
                                                    var_28_1 = eax_25
                                        else
                                            i_17 = i_23
                                    else
                                        i_13 = i_21
                                    
                                    edi_3 = &edi_3[1]
                                    i_2 = i_15
                                    i_15 -= 1
                                while (i_2 != 1)
                            
                            int32_t eax_27 = i_17 << 2
                            int32_t* eax_28 = sub_745f3f(eax_27)
                            var_1c_1 = eax_28
                            
                            if (eax_28 != 0)
                                int32_t i_22 = i_18 << 2
                                i_13 = i_22
                                int32_t* eax_29 = sub_745f3f(i_22)
                                var_18_1 = eax_29
                                
                                if (eax_29 != 0)
                                    int32_t eax_31 = var_28_1 << 2
                                    int32_t* eax_32 = sub_745f3f(eax_31)
                                    var_30_1 = eax_32
                                    
                                    if (eax_32 != 0)
                                        int32_t eax_33 = sub_745f3f(eax_27)
                                        var_40_1 = eax_33
                                        
                                        if (eax_33 != 0)
                                            int32_t* eax_34 = sub_745f3f(i_22)
                                            var_20_1 = eax_34
                                            
                                            if (eax_34 != 0)
                                                __builtin_memset(
                                                    __builtin_memset(var_1c_1, 0, 
                                                        eax_27 u>> 2 << 2), 
                                                    0, eax_27 & 3)
                                                void*** i_20 = i_13
                                                __builtin_memset(
                                                    __builtin_memset(var_18_1, 0, i_20 u>> 2 << 2), 
                                                    0, i_20 & 3)
                                                __builtin_memset(
                                                    __builtin_memset(var_30_1, 0, 
                                                        eax_31 u>> 2 << 2), 
                                                    0, eax_31 & 3)
                                                int32_t edx_10 = 0
                                                void* const var_64_3
                                                int32_t var_60_6
                                                char* var_5c_12
                                                
                                                if (*(arg1 + 8) u<= 0)
                                                label_4d6c76:
                                                    int32_t i_3 = 0
                                                    
                                                    if (*(arg1 + 8) u> 0)
                                                        do
                                                            void* edx_11 =
                                                                *(*(arg1 + 0x14) + (i_3 << 2))
                                                            
                                                            if (*(arg1 + 0x80) == *(edx_11 + 4))
                                                                int32_t eax_39 = 0
                                                                
                                                                if (i_17 u> 0)
                                                                    do
                                                                        void* ecx_40 = var_1c_1[eax_39]
                                                                        
                                                                        if (ecx_40 != 0 && *(edx_11 + 0x6c)
                                                                                == *(ecx_40 + 0x6c))
                                                                            *(edx_11 + 0xc) = eax_39
                                                                        
                                                                        eax_39 += 1
                                                                    while (eax_39 u< i_17)
                                                            
                                                            i_3 += 1
                                                        while (i_3 u< *(arg1 + 8))
                                                    
                                                    int32_t i_4 = 0
                                                    __builtin_memset(
                                                        __builtin_memset(var_1c_1, 0, 
                                                            eax_27 u>> 2 << 2), 
                                                        0, eax_27 & 3)
                                                    
                                                    if (*(arg1 + 8) u> 0)
                                                        do
                                                            void* eax_42 =
                                                                *(*(arg1 + 0x14) + (i_4 << 2))
                                                            int16_t ecx_46 = (*(
                                                                *(*(arg1 + 0x10) + (*(eax_42 + 4) << 2))
                                                                + 4)).w
                                                            
                                                            if ((ecx_46.b & 0x10) != 0
                                                                    && (ecx_46 & 0x204) == 0)
                                                                var_1c_1[*(eax_42 + 0xc)] = eax_42
                                                            
                                                            i_4 += 1
                                                        while (i_4 u< *(arg1 + 8))
                                                    
                                                    int32_t eax_43 = 0
                                                    i_13 = nullptr
                                                    
                                                    if (i_17 u> 0)
                                                        do
                                                            if (var_1c_1[eax_43] != 0)
                                                                i_13 += 1
                                                            
                                                            eax_43 += 1
                                                        while (eax_43 u< i_17)
                                                    
                                                    if (sub_4d3267(arg1) s>= 0
                                                            && (*(*arg1 + 0x2c))() s>= 0)
                                                        if ((*(arg1 + 0xcc) & 4) == 0
                                                                || (*(arg1 + 0x6e) & 0x20) != 0)
                                                            if (sub_4c8264(arg1) s>= 0
                                                                    && (*(*arg1 + 0x28))() s>= 0)
                                                                goto label_4d6d72
                                                        else
                                                        label_4d6d72:
                                                            
                                                            if (*(arg1 + 0x18c) == 0)
                                                            label_4d6df3:
                                                                
                                                                if (sub_4c7be2(arg1, *(arg1 + 0x7c), 
                                                                        *(arg1 + 0x38), 0x200, 0x42080, 0x63)
                                                                        s>= 0 && sub_4c7be2(arg1, 
                                                                        *(arg1 + 0x9c), *(arg1 + 0x60), 0x2200, 
                                                                        0x80, 0x62) s>= 0 && sub_4c7be2(arg1, 
                                                                        *(arg1 + 0xb0), *(arg1 + 0x40), 
                                                                        0x40200, 0x80, 0x69) s>= 0)
                                                                    int32_t esi_3 = 0
                                                                    bool cond:14_1 = *(arg1 + 0xc) u<= 0
                                                                    *(arg1 + 0x104) = 0
                                                                    int32_t eax_60
                                                                    
                                                                    if (cond:14_1)
                                                                        eax_60 = 0
                                                                    else
                                                                        eax_60 = **(arg1 + 0x18)
                                                                    
                                                                    *(arg1 + 0x100) = eax_60
                                                                    int32_t eax_61 = *arg1
                                                                    *(arg1 + 0xfc) = 0
                                                                    
                                                                    if ((*(eax_61 + 0x38))() s>= 0)
                                                                        int32_t var_8_3 = 0
                                                                        
                                                                        if (*(arg1 + 8) u> 0)
                                                                            int32_t* edx_13 = *(arg1 + 0x14)
                                                                            int32_t i_14 = *(arg1 + 8)
                                                                            int32_t i_5
                                                                            
                                                                            do
                                                                                void* eax_64 = *edx_13
                                                                                int16_t ecx_61 = (*(
                                                                                    *(*(arg1 + 0x10) + (*(eax_64 + 4) << 2))
                                                                                    + 4)).w
                                                                                
                                                                                if ((ecx_61:1.b & 1) != 0
                                                                                        && *(eax_64 + 8) == 0xffffffff && (
                                                                                        (ecx_61:1.b & 8) == 0
                                                                                        || *(arg1 + 0x158) != 0))
                                                                                    esi_3 += 1
                                                                                
                                                                                edx_13 = &edx_13[1]
                                                                                i_5 = i_14
                                                                                i_14 -= 1
                                                                            while (i_5 != 1)
                                                                        
                                                                        int32_t edi_20 = esi_3 << 4
                                                                        int32_t eax_65 = sub_745f3f(edi_20)
                                                                        var_2c_1 = eax_65
                                                                        
                                                                        if (eax_65 != 0)
                                                                            int32_t esi_4 = esi_3 << 2
                                                                            int32_t eax_66 = sub_745f3f(esi_4)
                                                                            var_38_1 = eax_66
                                                                            
                                                                            if (eax_66 != 0)
                                                                                __builtin_memset(
                                                                                    __builtin_memset(var_2c_1, 0, 
                                                                                        edi_20 u>> 2 << 2), 
                                                                                    0, edi_20 & 3)
                                                                                __builtin_memset(
                                                                                    __builtin_memset(var_38_1, 0, 
                                                                                        esi_4 u>> 2 << 2), 
                                                                                    0, esi_4 & 3)
                                                                                int32_t i_6 = 0
                                                                                
                                                                                if (*(arg1 + 8) u> 0)
                                                                                    do
                                                                                        void* eax_68 =
                                                                                            *(*(arg1 + 0x14) + (i_6 << 2))
                                                                                        int32_t ecx_74 = *(
                                                                                            *(*(arg1 + 0x10) + (*(eax_68 + 4) << 2))
                                                                                            + 4)
                                                                                        
                                                                                        if ((ecx_74:1.b & 1) != 0
                                                                                                && *(eax_68 + 8) == 0xffffffff
                                                                                                && *(eax_68 + 0x38) == 0xffffffff
                                                                                                && (ecx_74 & 0x40000) == 0 && (
                                                                                                (ecx_74:1.b & 8) == 0
                                                                                                || *(arg1 + 0x158) != 0))
                                                                                            int32_t ecx_75 = 0
                                                                                            
                                                                                            if (var_8_3 u> 0)
                                                                                                while (*(var_38_1 + (ecx_75 << 2))
                                                                                                        != *(eax_68 + 0xc))
                                                                                                    ecx_75 += 1
                                                                                                    
                                                                                                    if (ecx_75 u>= var_8_3)
                                                                                                        break
                                                                                            
                                                                                            if (ecx_75 == var_8_3)
                                                                                                var_8_3 += 1
                                                                                                *(var_38_1 + (ecx_75 << 2)) =
                                                                                                    *(eax_68 + 0xc)
                                                                                            
                                                                                            *(var_2c_1 + ((*(eax_68 + 0x10)
                                                                                                + (ecx_75 << 2)) << 2)) =
                                                                                                fconvert.s(fconvert.t(*(eax_68 + 0x20)))
                                                                                        
                                                                                        i_6 += 1
                                                                                    while (i_6 u< *(arg1 + 8))
                                                                                
                                                                                int32_t esi_6 = 0
                                                                                
                                                                                if (var_8_3 u> 0)
                                                                                    int32_t var_c_3 = var_2c_1
                                                                                    
                                                                                    do
                                                                                        if ((*(*arg1 + 0x3c))(
                                                                                                *(var_38_1 + (esi_6 << 2)), var_c_3)
                                                                                                s< 0)
                                                                                            goto label_4d737b
                                                                                        
                                                                                        var_c_3 += 0x10
                                                                                        esi_6 += 1
                                                                                    while (esi_6 u< var_8_3)
                                                                                
                                                                                int32_t var_34_2 = 0
                                                                                int32_t var_8_4 = 0
                                                                                
                                                                                if (*(arg1 + 8) u> 0)
                                                                                    int32_t* ecx_79 = *(arg1 + 0x14)
                                                                                    int32_t i_16 = *(arg1 + 8)
                                                                                    int32_t i_7
                                                                                    
                                                                                    do
                                                                                        void* eax_74 = *ecx_79
                                                                                        
                                                                                        if ((*(
                                                                                                *(*(arg1 + 0x10) + (*(eax_74 + 4) << 2))
                                                                                                + 5) & 1) != 0
                                                                                                && *(eax_74 + 8) == 0xffffffff)
                                                                                            var_34_2 += 1
                                                                                        
                                                                                        ecx_79 = &ecx_79[1]
                                                                                        i_7 = i_16
                                                                                        i_16 -= 1
                                                                                    while (i_7 != 1)
                                                                                
                                                                                int32_t edi_26 = var_34_2 << 4
                                                                                int32_t eax_75 = sub_745f3f(edi_26)
                                                                                var_34_1 = eax_75
                                                                                
                                                                                if (eax_75 != 0)
                                                                                    int32_t esi_10 = var_34_2 << 2
                                                                                    int32_t eax_76 = sub_745f3f(esi_10)
                                                                                    var_24_1 = eax_76
                                                                                    
                                                                                    if (eax_76 != 0)
                                                                                        int32_t i_8 = 0
                                                                                        __builtin_memset(
                                                                                            __builtin_memset(var_34_1, 0, 
                                                                                                edi_26 u>> 2 << 2), 
                                                                                            0, edi_26 & 3)
                                                                                        __builtin_memset(
                                                                                            __builtin_memset(var_24_1, 0, 
                                                                                                esi_10 u>> 2 << 2), 
                                                                                            0, esi_10 & 3)
                                                                                        
                                                                                        if (*(arg1 + 8) u> 0)
                                                                                            do
                                                                                                void* edi_31 =
                                                                                                    *(*(arg1 + 0x14) + (i_8 << 2))
                                                                                                int32_t eax_80 = *(
                                                                                                    *(*(arg1 + 0x10) + (*(edi_31 + 4) << 2))
                                                                                                    + 4)
                                                                                                
                                                                                                if ((eax_80:1.b & 1) != 0
                                                                                                        && *(edi_31 + 8) == 0xffffffff
                                                                                                        && *(edi_31 + 0x38) == 0xffffffff
                                                                                                        && (eax_80 & 0x40000) != 0)
                                                                                                    int32_t esi_11 = 0
                                                                                                    bool cond:21_1 = 0 != var_8_4
                                                                                                    
                                                                                                    if (0 u< var_8_4)
                                                                                                        while (*(var_24_1 + (esi_11 << 2))
                                                                                                                != *(edi_31 + 0xc))
                                                                                                            esi_11 += 1
                                                                                                            
                                                                                                            if (esi_11 u>= var_8_4)
                                                                                                                break
                                                                                                        
                                                                                                        cond:21_1 = esi_11 != var_8_4
                                                                                                    
                                                                                                    if (not(cond:21_1))
                                                                                                        var_8_4 += 1
                                                                                                        *(var_24_1 + (esi_11 << 2)) =
                                                                                                            *(edi_31 + 0xc)
                                                                                                    
                                                                                                    int32_t eax_83
                                                                                                    eax_83, x87control = __ftol(x87control, 
                                                                                                        fconvert.t(*(edi_31 + 0x20)))
                                                                                                    *(var_34_1 + ((*(edi_31 + 0x10)
                                                                                                        + (esi_11 << 2)) << 2)) = eax_83
                                                                                                
                                                                                                i_8 += 1
                                                                                            while (i_8 u< *(arg1 + 8))
                                                                                        
                                                                                        int32_t esi_12 = 0
                                                                                        
                                                                                        if (var_8_4 u> 0)
                                                                                            int32_t var_c_4 = var_34_1
                                                                                            
                                                                                            do
                                                                                                if ((*(*arg1 + 0x40))(
                                                                                                        *(var_24_1 + (esi_12 << 2)), var_c_4)
                                                                                                        s< 0)
                                                                                                    goto label_4d737b
                                                                                                
                                                                                                var_c_4 += 0x10
                                                                                                esi_12 += 1
                                                                                            while (esi_12 u< var_8_4)
                                                                                        
                                                                                        if (i_13 u<= *(arg1 + 0x44))
                                                                                            int32_t var_c_5 = 0
                                                                                            
                                                                                            if (i_17 u> 0)
                                                                                                int32_t* edi_32 = var_1c_1
                                                                                                void* esi_14 = var_40_1 - edi_32
                                                                                                i_13 = i_17
                                                                                                void*** i_9
                                                                                                
                                                                                                do
                                                                                                    int32_t eax_90 = *edi_32
                                                                                                    
                                                                                                    if (eax_90 != 0 && (*(*arg1 + 0x44))(
                                                                                                            eax_90, esi_14 + edi_32) s< 0)
                                                                                                        var_c_5 = 1
                                                                                                    
                                                                                                    edi_32 = &edi_32[1]
                                                                                                    i_9 = i_13
                                                                                                    i_13 -= 1
                                                                                                while (i_9 != 1)
                                                                                            
                                                                                            edi_1 = (*(*arg1 + 0x4c))()
                                                                                            int32_t esi_15 = 0
                                                                                            
                                                                                            if (edi_1 s>= 0)
                                                                                                if (var_28_1 u> 0)
                                                                                                    do
                                                                                                        int32_t eax_95 = var_30_1[esi_15]
                                                                                                        
                                                                                                        if (eax_95 != 0
                                                                                                                && (*(*arg1 + 0x48))(eax_95) s< 0)
                                                                                                            var_c_5 = 1
                                                                                                        
                                                                                                        esi_15 += 1
                                                                                                    while (esi_15 u< var_28_1)
                                                                                                
                                                                                                if ((*(arg1 + 0x70) & 0x80) == 0)
                                                                                                    if (i_18 u> 0)
                                                                                                        void* edi_34 = var_18_1
                                                                                                        void* esi_19 = var_20_1 - edi_34
                                                                                                        i_13 = i_18
                                                                                                        void*** i_10
                                                                                                        
                                                                                                        do
                                                                                                            int32_t eax_101 = *edi_34
                                                                                                            
                                                                                                            if (eax_101 != 0 && (*(*arg1 + 0x6c))(
                                                                                                                    eax_101, edi_34 + esi_19, 0, 0) s< 0)
                                                                                                                var_c_5 = 1
                                                                                                            
                                                                                                            edi_34 += 4
                                                                                                            i_10 = i_13
                                                                                                            i_13 -= 1
                                                                                                        while (i_10 != 1)
                                                                                                else if (i_18 u> 0)
                                                                                                    int32_t* edi_33 = var_18_1
                                                                                                    void* esi_17 = var_20_1 - edi_33
                                                                                                    i_13 = i_18
                                                                                                    void*** i_11
                                                                                                    
                                                                                                    do
                                                                                                        int32_t eax_98 = *edi_33
                                                                                                        
                                                                                                        if (eax_98 != 0 && (*(*arg1 + 0x44))(
                                                                                                                eax_98, esi_17 + edi_33) s< 0)
                                                                                                            var_c_5 = 1
                                                                                                        
                                                                                                        edi_33 = &edi_33[1]
                                                                                                        i_11 = i_13
                                                                                                        i_13 -= 1
                                                                                                    while (i_11 != 1)
                                                                                                
                                                                                                int32_t* ecx_106 = nullptr
                                                                                                
                                                                                                if (var_c_5 == 0)
                                                                                                    int32_t esi_20 = 0
                                                                                                    
                                                                                                    if (i_18 u> 0)
                                                                                                        do
                                                                                                            if (*(ecx_106 + var_18_1) != 0)
                                                                                                                i_13 = nullptr
                                                                                                                
                                                                                                                if (ecx_106 u> 0)
                                                                                                                    int32_t* eax_103 = var_20_1
                                                                                                                    void* edx_28 = var_18_1 - eax_103
                                                                                                                    
                                                                                                                    while (*(edx_28 + eax_103) == 0
                                                                                                                            || *(ecx_106 + var_20_1) != *eax_103)
                                                                                                                        i_13 += 1
                                                                                                                        eax_103 = &eax_103[1]
                                                                                                                        
                                                                                                                        if (i_13 u>= esi_20)
                                                                                                                            goto label_4d726a
                                                                                                                    
                                                                                                                    var_5c_12 =
                                                                                                                        "overlapping output semantics"
                                                                                                                    var_60_6 = 0x1198
                                                                                                                    var_64_3 = *(var_18_1[esi_20] + 0x68)
                                                                                                                    goto label_4d741c_1
                                                                                                            
                                                                                                        label_4d726a:
                                                                                                            esi_20 += 1
                                                                                                            ecx_106 = &ecx_106[1]
                                                                                                        while (esi_20 u< i_18)
                                                                                                    
                                                                                                    if ((*(arg1 + 0x6e) & 0x40) == 0)
                                                                                                        edi_1 = sub_4c8264(arg1)
                                                                                                    
                                                                                                    if ((*(arg1 + 0x6e) & 0x40) != 0
                                                                                                            || edi_1 s>= 0)
                                                                                                        edi_1 = (*(*arg1 + 0x24))()
                                                                                                        
                                                                                                        if (edi_1 s>= 0)
                                                                                                            if (*(arg1 + 0xe0) != 0)
                                                                                                                edi_1 = sub_4d549f(arg1)
                                                                                                            
                                                                                                            if (*(arg1 + 0xe0) == 0 || edi_1 s>= 0)
                                                                                                                edi_1 = sub_4d55c7(arg1)
                                                                                                                
                                                                                                                if (edi_1 s>= 0)
                                                                                                                    if ((*(arg1 + 0xcc) & 1) != 0)
                                                                                                                        edi_1 = sub_4d6174(arg1)
                                                                                                                    
                                                                                                                    if (((*(arg1 + 0xcc) & 1) == 0
                                                                                                                            || edi_1 s>= 0)
                                                                                                                            && sub_4d546f(arg1, 0xffff) s>= 0)
                                                                                                                        edi_1 = sub_4d25aa(arg1)
                                                                                                                        
                                                                                                                        if (edi_1 s>= 0)
                                                                                                                            int32_t* eax_112 = *(arg1 + 0x1b0)
                                                                                                                            
                                                                                                                            if (eax_112 != 0 && *(arg1 + 0xd4) == 0)
                                                                                                                                edi_1 = (*(*eax_112 + 0x14))(eax_112)
                                                                                                                            
                                                                                                                            if ((eax_112 == 0 || *(arg1 + 0xd4) != 0
                                                                                                                                    || edi_1 s>= 0) && arg2 != 0 &&
                                                                                                                                    sub_458ce7(*(arg1 + 0x110) << 2, &i_13)
                                                                                                                                    s>= 0)
                                                                                                                                int32_t eax_118 = *(arg1 + 0x110) << 2
                                                                                                                                void*** i_19 = i_13
                                                                                                                                int32_t esi_22
                                                                                                                                int32_t edi_38
                                                                                                                                edi_38, esi_22 = __builtin_memcpy(
                                                                                                                                    (*i_19)[3](i_19), *(arg1 + 0x10c), 
                                                                                                                                    eax_118 u>> 2 << 2)
                                                                                                                                __builtin_memcpy(edi_38, esi_22, 
                                                                                                                                    eax_118 & 3)
                                                                                                                                *arg2 = i_13
                                                                                        else
                                                                                        label_4d741c:
                                                                                            sub_4a4100(arg1, nullptr, 0x119a, 
                                                                                                "maximum number of inputs exceeded")
                                                            else
                                                                int32_t eax_50
                                                                int32_t ecx_53
                                                                eax_50, ecx_53 = sub_49f4eb(arg1, 
                                                                    0xabff58, 0x351, 0xffffffff, 4)
                                                                
                                                                if (eax_50 != 0xffffffff)
                                                                    int32_t i_12 = 0
                                                                    void* esi_2 = arg1 + 0x190
                                                                    
                                                                    do
                                                                        int32_t var_5c_11 = ecx_53
                                                                        int32_t var_60_5 = ecx_53
                                                                        var_60_5.q = fconvert.d(fconvert.t(
                                                                            *((i_12 << 3) + &data_acd6d8)))
                                                                        int32_t eax_55
                                                                        eax_55, ecx_53, x87control = sub_49f544(
                                                                            arg1, eax_50, i_12 u>> 2, i_12 & 3, 
                                                                            var_60_5)
                                                                        *esi_2 = eax_55
                                                                        
                                                                        if (eax_55 == 0xffffffff)
                                                                            goto label_4d737b
                                                                        
                                                                        i_12 += 1
                                                                        esi_2 += 4
                                                                    while (i_12 u< 8)
                                                                    
                                                                    goto label_4d6df3
                                                else
                                                    while (true)
                                                        void* eax_36 =
                                                            *(*(arg1 + 0x14) + (edx_10 << 2))
                                                        int32_t ecx_35 = *(eax_36 + 4)
                                                        
                                                        if (*(arg1 + 0x84) == ecx_35)
                                                            if (*(eax_36 + 0x6c) == 0xffffffff)
                                                                var_5c_12 = "internal error: output "
                                                                "register missing semantic"
                                                            label_4d6e66:
                                                                var_60_6 = 0
                                                                var_64_3 = nullptr
                                                                break
                                                            
                                                            var_18_1[*(eax_36 + 0xc)] = eax_36
                                                        else if (*(arg1 + 0x80) == ecx_35)
                                                            if (*(eax_36 + 0x6c) == 0xffffffff)
                                                                var_5c_12 = "internal error: input "
                                                                "register missing semantic"
                                                                goto label_4d6e66
                                                            
                                                            var_1c_1[*(eax_36 + 0xc)] = eax_36
                                                        else if ((
                                                                *(*(*(arg1 + 0x10) + (ecx_35 << 2)) + 4)
                                                                & 0x80) != 0)
                                                            var_30_1[*(eax_36 + 0xc)] = eax_36
                                                        
                                                        edx_10 += 1
                                                        
                                                        if (edx_10 u>= *(arg1 + 8))
                                                            goto label_4d6c76
                                                    
                                                label_4d741c_1:
                                                    sub_4a4100(arg1, var_64_3, var_60_6, var_5c_12)
                else if (sub_46b31b(*(arg1 + 0xc8), 0, &var_4c) s>= 0)
                    int32_t eax_19 = *(arg1 + 0x4c)
                    
                    if (eax_19 == 0)
                        int32_t var_5c_5 = var_4c
                        sub_4a4100(arg1, nullptr, 0x11c1, 
                            "%s target does not support texture lookups")
                    else
                        int32_t var_5c_4 = eax_19
                        int32_t var_60_4 = var_4c
                        sub_4a4100(arg1, nullptr, 0x119e, 
                            "maximum number of samplers exceeded. %s target can have a maximum of %i "
                        "samplers")
        else
            HMODULE hModule = GetModuleHandleA("d3d9.dll")
            
            if (hModule == 0)
                hModule = LoadLibraryA("d3d9.dll")
                
                if (hModule == 0)
                    goto label_4d697e
                
                goto label_4d6950
            
        label_4d6950:
            int32_t eax_5 = GetProcAddress(hModule, "Direct3DShaderValidatorCreate9")
            
            if (eax_5 == 0)
                goto label_4d697e
            
            int32_t* eax_6 = eax_5()
            *(arg1 + 0x1b0) = eax_6
            
            if (eax_6 == 0)
                goto label_4d697e
            
            edi_1 = (*(*eax_6 + 0xc))(eax_6, sub_4d2633, arg1, 1)
            
            if (edi_1 s>= 0)
                goto label_4d697e

label_4d737b:
j__free(var_1c_1)
j__free(var_18_1)
j__free(var_40_1)
j__free(var_20_1)
j__free(0)
j__free(var_2c_1)
j__free(var_38_1)
j__free(var_30_1)
j__free(var_34_1)
j__free(var_24_1)
j__free(*(arg1 + 0x10c))
*(arg1 + 0x10c) = 0
j__free(*(arg1 + 0x124))
*(arg1 + 0x124) = 0
int32_t* eax_122 = *(arg1 + 0x1b0)

if (eax_122 != 0)
    (*(*eax_122 + 8))(eax_122)
    *(arg1 + 0x1b0) = 0
