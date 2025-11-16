// 函数: sub_4b1555
// 地址: 0x4b1555
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = 0
int32_t edi
int32_t var_74 = edi
int32_t var_20 = 0

if (*(arg1 + 4) u> 0)
    int32_t* ecx = *(arg1 + 0x10)
    int32_t i_7 = *(arg1 + 4)
    int32_t i
    
    do
        void* eax_1 = *ecx
        int16_t edx_1 = (*(eax_1 + 4)).w
        
        if ((edx_1:1.b & 1) != 0 && (edx_1:1.b & 0xc) != 0)
            esi += *(eax_1 + 8)
        
        ecx = &ecx[1]
        i = i_7
        i_7 -= 1
    while (i != 1)
    var_20 = esi

int32_t edi_2 = (esi + (*(arg1 + 0xc) << 1)) << 4
int32_t* eax_5 = sub_745f3f(edi_2)

if (eax_5 == 0)
    return 0x8007000e

__builtin_memset(__builtin_memset(eax_5, 0xffffffff, edi_2 u>> 2 << 2), 0xff, edi_2 & 3)
int32_t i_1 = 0
int32_t var_34_1 = 0
sub_4a3f75(arg1)
int32_t i_6 = 0
int32_t* var_1c

if (*(arg1 + 4) u> 0)
    do
        int32_t* eax_9 = *(*(*(arg1 + 0x10) + (i_1 << 2)) + 4)
        var_1c = eax_9
        
        if ((eax_9:1.b & 1) != 0 && (var_1c:1.b & 0xc) != 0)
            int32_t var_c_1 = 0
            
            if (var_20 u> 0)
                int32_t eax_10 = *(arg1 + 8)
                
                do
                    int32_t j = 0
                    
                    if (eax_10 u> 0)
                        int32_t edx_3 = *(arg1 + 0x14)
                        
                        do
                            void* eax_11 = *(edx_3 + (j << 2))
                            
                            if (*(eax_11 + 4) == i_1 && *(eax_11 + 8) == 0xffffffff)
                                int32_t ecx_10 =
                                    eax_5[*(eax_11 + 0x10) + ((*(eax_11 + 0xc) + var_c_1) << 2)]
                                
                                if (ecx_10 != 0xffffffff)
                                    if ((var_1c:1.b & 8) != 0)
                                        i_1 = i_6
                                        break
                                    
                                    long double x87_r7_1 =
                                        fconvert.t(*(*(edx_3 + (ecx_10 << 2)) + 0x20))
                                    long double x87_r6_1 = fconvert.t(*(eax_11 + 0x20))
                                    x87_r6_1 - x87_r7_1
                                    eax_11.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                                        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
                                    bool p_1 = unimplemented  {test ah, 0x44}
                                    
                                    if (p_1)
                                        i_1 = i_6
                                        break
                                
                                i_1 = i_6
                            
                            j += 1
                        while (j u< *(arg1 + 8))
                    
                    eax_10 = *(arg1 + 8)
                    
                    if (j == eax_10)
                        break
                    
                    var_c_1 += 1
                while (var_c_1 u< var_20)
            
            if ((var_1c:1.b & 8) != 0)
                int32_t j_1 = 0
                
                if (*(arg1 + 8) u> 0)
                    do
                        void* eax_15 = *(*(arg1 + 0x14) + (j_1 << 2))
                        
                        if (*(eax_15 + 4) == i_1)
                            eax_5[*(eax_15 + 0x10) + ((*(eax_15 + 0xc) + var_c_1) << 2)] = j_1
                        
                        j_1 += 1
                    while (j_1 u< *(arg1 + 8))
            else
                int32_t j_2 = 0
                
                if (*(arg1 + 8) u> 0)
                    do
                        void* eax_13 = *(*(arg1 + 0x14) + (j_2 << 2))
                        
                        if (*(eax_13 + 4) == i_1)
                            *(eax_13 + 0xc) += var_c_1
                            
                            if (*(eax_13 + 8) == 0xffffffff)
                                void* ecx_16 = &eax_5[*(eax_13 + 0x10) + (*(eax_13 + 0xc) << 2)]
                                
                                if (*ecx_16 != 0xffffffff)
                                    *(eax_13 + 4) = *(arg1 + 0x74)
                                    *(eax_13 + 0x30) = *ecx_16
                                    var_34_1 = 1
                                else
                                    *ecx_16 = j_2
                        
                        j_2 += 1
                    while (j_2 u< *(arg1 + 8))
        
        i_1 += 1
        i_6 = i_1
    while (i_1 u< *(arg1 + 4))
    
    if (var_34_1 != 0)
        sub_4a3f8e(arg1)

int32_t i_2 = 0

if (*(arg1 + 8) u> 0)
    do
        void* eax_19 = *(*(arg1 + 0x14) + (i_2 << 2))
        int16_t ecx_21 = (*(*(*(arg1 + 0x10) + (*(eax_19 + 4) << 2)) + 4)).w
        
        if ((ecx_21:1.b & 1) != 0 && (ecx_21:1.b & 0xc) == 0)
            *(eax_19 + 0xc) = 0xffffffff
            *(eax_19 + 4) = *(arg1 + 0x78)
        
        i_2 += 1
    while (i_2 u< *(arg1 + 8))

int32_t i_3 = 0
int32_t* var_38

if (*(arg1 + 0xc) u> 0)
    do
        int32_t* eax_21 = *(*(arg1 + 0x18) + (i_3 << 2))
        
        if ((*(eax_21 + 2) & 0xfff0) != 0)
            int32_t var_48 = 0xffffffff
            void var_44
            void* edi_9 = &var_44
            *edi_9 = 0xffffffff
            void* edi_10 = edi_9 + 4
            *edi_10 = 0xffffffff
            *(edi_10 + 4) = 0xffffffff
            int32_t var_58 = 0
            void var_54
            void* edi_13 = &var_54
            *edi_13 = 0
            void* edi_14 = edi_13 + 4
            *edi_14 = 0
            *(edi_14 + 4) = 0
            int32_t var_c_2 = 0
            int32_t var_2c_1 = 0
            int32_t var_24_1 = 0
            int32_t j_3 = sub_49e7de(eax_21, 0, &var_1c)
            int32_t j_5 = j_3
            int32_t __saved_ebp
            
            if (j_3 != 0)
                void var_68
                void* esi_3 = &var_68
                void* var_18_1 = &var_68
                
                do
                    int32_t edi_17 = *(arg1 + 0x14)
                    void* ecx_27 = *(edi_17 + (*var_1c << 2))
                    
                    if (*(arg1 + 0x78) == *(ecx_27 + 4) && *(ecx_27 + 8) == 0xffffffff)
                        *esi_3 = (not.d(*(arg1 + 0x6c)) & 4) u>> 2
                        int32_t edx_12 = 1
                        
                        if (j_3 u> 1)
                            while (*esi_3 != 0)
                                long double x87_r7_2 =
                                    fconvert.t(*(*(edi_17 + (var_1c[edx_12] << 2)) + 0x20))
                                long double x87_r6_2 = fconvert.t(*(ecx_27 + 0x20))
                                x87_r6_2 - x87_r7_2
                                void* eax_24
                                eax_24.w = (x87_r6_2 < x87_r7_2 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
                                    | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe
                                bool p_2 = unimplemented  {test ah, 0x44}
                                
                                if (p_2)
                                    *esi_3 = 0
                                
                                j_3 = j_5
                                edx_12 += 1
                                
                                if (edx_12 u>= j_3)
                                    break
                        
                        int32_t var_14_1 = 0
                        
                        if (j_3 u> 0)
                            do
                                int32_t edx_13 = var_1c[var_14_1]
                                int32_t ecx_29 = 0
                                
                                if (var_c_2 u> 0)
                                    do
                                        long double x87_r7_3 =
                                            fconvert.t(*(*(edi_17 + (edx_13 << 2)) + 0x20))
                                        long double x87_r6_3 = fconvert.t(
                                            *(*(edi_17 + ((&var_48)[ecx_29] << 2)) + 0x20))
                                        x87_r6_3 - x87_r7_3
                                        void* eax_27
                                        eax_27.w = (x87_r6_3 < x87_r7_3 ? 1 : 0) << 8
                                            | (is_unordered.t(x87_r6_3, x87_r7_3) ? 1 : 0) << 0xa
                                            | (x87_r6_3 == x87_r7_3 ? 1 : 0) << 0xe
                                        bool p_3 = unimplemented  {test ah, 0x44}
                                        
                                        if (not(p_3))
                                            break
                                        
                                        ecx_29 += 1
                                    while (ecx_29 u< var_c_2)
                                    
                                    if (ecx_29 == 4)
                                        var_2c_1 = 1
                                        break
                                
                                if (ecx_29 == var_c_2)
                                    int32_t eax_28 = var_c_2
                                    var_c_2 += 1
                                    (&var_48)[eax_28] = edx_13
                                
                                if (*var_18_1 == 0)
                                    (&__saved_ebp)[ecx_29 - 0x15] |= 1 << var_14_1.b
                                
                                var_14_1 += 1
                            while (var_14_1 u< j_5)
                            
                            esi_3 = var_18_1
                        
                        if (var_2c_1 != 0)
                            goto label_4b1913
                    
                    var_24_1 += 1
                    esi_3 += 4
                    var_18_1 = esi_3
                    j_3 = sub_49e7de(eax_21, var_24_1, &var_1c)
                    j_5 = j_3
                while (j_3 != 0)
                
                if (var_2c_1 != j_3)
                    goto label_4b1913
                
                goto label_4b18b6
            
        label_4b18b6:
            
            if (sub_4a2b12(arg1, eax_5, &var_48, &var_58) s< 0)
            label_4b1913:
                int32_t var_2c_2 = 0
                int32_t* var_30
                int32_t** var_78_7 = &var_30
                int32_t var_7c_5 = 0
                
                while (true)
                    int32_t eax_36 = sub_49e7de(eax_21, var_7c_5, var_78_7)
                    
                    if (eax_36 == 0)
                        break
                    
                    int32_t* esi_6 = var_30
                    void* eax_34 = *(*(arg1 + 0x14) + (*esi_6 << 2))
                    
                    if (*(arg1 + 0x78) == *(eax_34 + 4) && *(eax_34 + 8) == 0xffffffff)
                        int32_t edx_16 = 0
                        
                        if (eax_36 u> 0)
                            __builtin_memcpy(&var_48, esi_6, eax_36 << 2)
                            
                            do
                                int32_t esi_7 = 1 << edx_16.b
                                edx_16 += 1
                                void var_5c
                                *(&var_5c + (edx_16 << 2)) = esi_7
                            while (edx_16 u< eax_36)
                        
                        if (eax_36 u< 4)
                            int32_t edx_18 = (4 - eax_36) << 2
                            __builtin_memset(&(&__saved_ebp)[eax_36 - 0x15], 0, edx_18 u>> 2 << 2)
                            __builtin_memset(&(&__saved_ebp)[eax_36 - 0x11], 0xffffffff, 
                                edx_18 u>> 2 << 2)
                        
                        sub_4a2b12(arg1, eax_5, &var_48, &var_58)
                        sub_4a2a21(arg1, &var_48, var_30, eax_36)
                    
                    var_2c_2 += 1
                    var_78_7 = &var_30
                    var_7c_5 = var_2c_2
            else
                int32_t esi_5 = 0
                
                for (int32_t j_4 = sub_49e7de(eax_21, 0, &var_38); j_4 != 0; 
                        j_4 = sub_49e7de(eax_21, esi_5, &var_38))
                    int32_t* edx_15 = var_38
                    void* ecx_35 = *(*(arg1 + 0x14) + (*edx_15 << 2))
                    
                    if (*(arg1 + 0x78) == *(ecx_35 + 4) && *(ecx_35 + 8) == 0xffffffff)
                        sub_4a2a21(arg1, &var_48, edx_15, j_4)
                    
                    esi_5 += 1
        
        i_3 += 1
    while (i_3 u< *(arg1 + 0xc))

int32_t i_4 = 0
bool cond:6_1 = *(arg1 + 8) u<= 0
var_38 = nullptr

if (not(cond:6_1))
    do
        void* eax_39 = *(*(arg1 + 0x14) + (i_4 << 2))
        int32_t ecx_49 = *(eax_39 + 4)
        int32_t esi_10 = *(arg1 + 0x78)
        
        if (esi_10 != ecx_49 || *(eax_39 + 0xc) != 0xffffffff)
            int16_t ecx_51 = (*(*(*(arg1 + 0x10) + (ecx_49 << 2)) + 4)).w
            
            if ((ecx_51:1.b & 1) != 0 && (ecx_51.b & 0x40) != 0 && (ecx_51:1.b & 8) == 0)
                bool cond:12_1 = *(eax_39 + 8) == 0xffffffff
                *(eax_39 + 4) = esi_10
                
                if (not(cond:12_1))
                    var_38 = 1
        else
            *(eax_39 + 4) = *(arg1 + 0x74)
        
        i_4 += 1
    while (i_4 u< *(arg1 + 8))

void* eax_41 = *(*(arg1 + 0x10) + (*(arg1 + 0x78) << 2))
*(eax_41 + 4) |= 0x40

if (var_38 != 0)
    void* eax_43 = *(*(arg1 + 0x10) + (*(arg1 + 0x78) << 2))
    *(eax_43 + 5) |= 4

*(*(*(arg1 + 0x10) + (*(arg1 + 0x78) << 2)) + 8) = 0
int32_t i_5 = 0

if (*(arg1 + 8) u> 0)
    do
        void* eax_47 = *(*(arg1 + 0x14) + (i_5 << 2))
        int32_t ecx_55 = *(arg1 + 0x78)
        
        if (ecx_55 == *(eax_47 + 4) && *(eax_47 + 8) == 0xffffffff)
            void* ecx_56 = *(*(arg1 + 0x10) + (ecx_55 << 2))
            int32_t eax_48 = *(eax_47 + 0xc)
            
            if (*(ecx_56 + 8) u<= eax_48)
                *(ecx_56 + 8) = eax_48 + 1
        
        i_5 += 1
    while (i_5 u< *(arg1 + 8))

if (var_34_1 != 0)
    sub_4ad8ba(arg1)

*(arg1 + 0xdc) = 1
j__free(eax_5)
return 0
