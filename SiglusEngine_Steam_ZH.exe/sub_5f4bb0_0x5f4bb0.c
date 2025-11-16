// 函数: sub_5f4bb0
// 地址: 0x5f4bb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bd0e3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_78 = 0
int32_t i = 0
int128_t var_54
__builtin_memset(&var_54, 0, 0x40)
int32_t* i_3

do
    void* eax_3 = *(arg1 + 0x1588)
    sub_628eb0(eax_3, eax_3 + 0x120 + i, arg1 + 0x12d0, eax_3 + 4 + i)
    i_3 = *(arg1 + 0x1588)
    *(i + i_3 + 4) = 0
    i += 0x130
while (i s< 0x1300)

if (*(arg1 + 0x12d0) != 0 && *(arg1 + 0x1568) != 0)
    int32_t ecx_3 = *(arg1 + 0x1f0)
    int32_t eax_5
    int32_t edx_3
    edx_3:eax_5 = sx.q(ecx_3)
    int32_t edi_2 = (eax_5 ^ edx_3) - edx_3
    int32_t eax_6
    
    if (ecx_3 s<= 0)
        int32_t eax_7
        eax_7.b = ecx_3 s>= 0
        eax_6 = eax_7 - 1
    else
        eax_6 = 1
    
    char var_61_1
    
    if (*(arg1 + 0x1fc) == 0)
        var_61_1 = 0
    
    if (*(arg1 + 0x1fc) != 0 || eax_6 == 0xffffffff)
        var_61_1 = 1
    
    char var_55_1
    
    if (*(arg1 + 0x200) != 0)
        var_55_1 = 1
    
    if (*(arg1 + 0x200) == 0 || *(arg1 + 0x1f8) != 0)
        var_55_1 = 0
    
    int32_t eax_8 = *(arg1 + 0x1f4)
    int32_t eax_9 = sub_6b3cf0(edi_2)
    int32_t ecx_5
    ecx_5.b = mulu.dp.d(eax_9, 4) u>> 0x20 != 0
    int32_t var_b0_2 = neg.d(ecx_5) | (eax_9 * 4)
    int32_t eax_11 = sub_7431ed()
    char var_70 = 0
    int32_t var_b0_3 = var_70.d
    int32_t var_8_1 = 0
    int32_t* var_8c
    sub_6b3d30(sub_5f5440(&var_8c, eax_11), eax_11, edi_2, eax_9)
    int32_t eax_13 = eax_8
    
    if (*(arg1 + 0x1f8) != 0 && eax_13 s> 0)
        var_70.d = eax_13
        int32_t edx_5 = 0
        __builtin_memset(&var_54, 0, eax_13 << 2)
        bool cond:5_1
        
        do
            var_70.d -= 1
            cond:5_1 = var_70.d != 1
            edx_5 += 0x130
            *(edx_5 + *(arg1 + 0x1588) - 0x12c) = 1
        while (cond:5_1)
        eax_13 = eax_8
    
    var_70.d = 0
    int32_t* var_7c = eax_13 - eax_9
    char* eax_16 = &var_70
    
    if (eax_13 - eax_9 s>= 0)
        eax_16 = &var_7c
    
    void* const var_5c_2 = 0xffffffff
    int128_t* edi_3 = *eax_16
    int128_t* var_60 = edi_3
    
    if (var_61_1 != 0)
        void* const edx_6
        
        if (var_55_1 == 0)
            edx_6 = nullptr
        else
            var_7c = nullptr
            var_70.d = edi_3 - 1
            int32_t* ecx_11 = &var_7c
            
            if (edi_3 - 1 s>= 0)
                ecx_11 = &var_70
            
            edx_6 = *ecx_11
        
        var_5c_2 = edx_6
        var_7c = edx_6 + 1
        int32_t* ecx_12 = &var_7c
        
        if (edi_3 s>= edx_6 + 1)
            ecx_12 = &var_60
        
        edi_3 = *ecx_12
    
    int32_t ecx_13 = 0
    
    if (eax_9 s> 0)
        int32_t edx_7 = edi_3 * 0x130
        void* edi_5 = &(&__saved_ebp)[edi_3 - 0x14]
        
        do
            edx_7 += 0x130
            edi_5 += 4
            int32_t eax_20 = *(eax_11 + (ecx_13 << 2))
            ecx_13 += 1
            *(edi_5 - 4) = eax_20
            *(edx_7 + *(arg1 + 0x1588) - 0x12c) = 1
        while (ecx_13 s< eax_9)
    
    if (var_61_1 != 0)
        void* const eax_23
        
        if (eax_6 == 0)
            eax_23 = var_5c_2
            *(&var_54 + (eax_23 << 2)) = 0xc
        else if (eax_6 != 1)
            eax_23 = var_5c_2
            
            if (eax_6 == 0xffffffff)
                *(&var_54 + (eax_23 << 2)) = 0xa
        else
            eax_23 = var_5c_2
            *(&var_54 + (eax_23 << 2)) = 0xb
        
        *(eax_23 * 0x130 + *(arg1 + 0x1588) + 4) = 1
    
    int128_t var_44
    void* eax_25 = &var_44
    uint32_t xmm1_1[0x4] = _mm_shuffle_epi32(zx.o(*(arg1 + 0x12d4)), 0)
    int32_t i_2 = 2
    int32_t i_1
    
    do
        eax_25 += 0x20
        *(eax_25 - 0x30) = _mm_add_epi32(*(eax_25 - 0x30), xmm1_1)
        *(eax_25 - 0x20) = _mm_add_epi32(*(eax_25 - 0x20), xmm1_1)
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    int128_t* edx_8 = &var_54
    int32_t i_4 = i_2
    int128_t* var_84_2 = &var_54
    
    do
        if (*(i_2 + *(arg1 + 0x1588) + 4) != 0)
            int32_t var_74
            sub_54d980(*(arg1 + 0x1568), &var_74, *edx_8)
            int128_t* eax_28 = *(arg1 + 0x1588) + i_4
            var_60 = eax_28
            var_8_1.b = 1
            int32_t* ecx_16 = var_70.d
            int32_t edx_9 = var_74
            var_7c = ecx_16
            
            if (ecx_16 != 0)
                ecx_16[1] += 1
                eax_28 = var_60
                ecx_16 = var_7c
            
            *(eax_28 + 0xd8) = edx_9
            int128_t* edx_10 = *(eax_28 + 0xdc)
            var_60 = edx_10
            *(eax_28 + 0xdc) = ecx_16
            
            if (edx_10 != 0)
                bool cond:8_1 = *(edx_10 + 4) != 1
                *(edx_10 + 4)
                *(edx_10 + 4) -= 1
                
                if (not(cond:8_1))
                    (*(*edx_10 + 4))(eax_2)
                    int128_t* ecx_19 = var_60
                    bool cond:11_1 = *(ecx_19 + 8) != 1
                    *(ecx_19 + 8)
                    *(ecx_19 + 8) -= 1
                    
                    if (not(cond:11_1))
                        (*(*ecx_19 + 8))()
            
            var_8_1.b = 0
            int128_t* edx_12 = var_70.d
            var_60 = edx_12
            
            if (edx_12 != 0)
                bool cond:10_1 = *(edx_12 + 4) != 1
                *(edx_12 + 4)
                *(edx_12 + 4) -= 1
                
                if (not(cond:10_1))
                    (*(*edx_12 + 4))(eax_2)
                    int128_t* ecx_22 = var_60
                    bool cond:14_1 = *(ecx_22 + 8) != 1
                    *(ecx_22 + 8)
                    *(ecx_22 + 8) -= 1
                    
                    if (not(cond:14_1))
                        (*(*ecx_22 + 8))()
            
            i_2 = i_4
            edx_8 = var_84_2
            *(i_2 + *(arg1 + 0x1588) + 0x18) = 0
        
        i_2 += 0x130
        edx_8 += 4
        var_84_2 = edx_8
        i_4 = i_2
    while (i_2 s< 0x1300)
    
    int32_t ecx_23 = 0
    int32_t* i_5 = nullptr
    int128_t* var_68_2 = &var_54
    var_70.d = 0
    
    do
        int32_t eax_39 = *(arg1 + 0x1588)
        float xmm0_7 = _mm_cvtepi32_ps(zx.o(ecx_23))
        *(i_5 + eax_39 + 0x28) = *(i_5 + eax_39 + 0x28) - xmm0_7
        ecx_23 += *(arg1 + 0x208)
        
        if (*(arg1 + 0x204) == 0)
            int32_t eax_41 = *var_68_2
            char var_55_2
            int32_t ecx_27
            
            if (eax_41 s< 0)
                ecx_27 = var_78
                var_55_2 = 0
            else
                ecx_27 = var_78 | 1
                var_78 = ecx_27
                void var_80
                
                if (*sub_6f12f0(*(arg1 + 0x1588) + i_5, &var_80, eax_41) == 0)
                    var_55_2 = 0
                else
                    var_55_2 = 1
            
            if ((ecx_27.b & 1) != 0)
                int32_t* edx_14 = var_7c
                var_78 = ecx_27 & 0xfffffffe
                var_60 = edx_14
                
                if (edx_14 != 0)
                    bool cond:15_1 = edx_14[1] != 1
                    edx_14[1]
                    edx_14[1] -= 1
                    
                    if (not(cond:15_1))
                        (*(*edx_14 + 4))(eax_2)
                        int128_t* ecx_31 = var_60
                        bool cond:17_1 = *(ecx_31 + 8) != 1
                        *(ecx_31 + 8)
                        *(ecx_31 + 8) -= 1
                        
                        if (not(cond:17_1))
                            (*(*ecx_31 + 8))()
            
            int32_t* ecx_32 = *(arg1 + 0x1568)
            int32_t* eax_48
            int128_t* edx_16
            
            if (var_55_2 == 0)
                void var_a0
                int32_t* eax_49 = sub_54d980(ecx_32, &var_a0, 0)
                int128_t* var_9c
                var_60 = var_9c
                bool var_55_3 = *eax_49 != 0
                
                if (var_9c != 0)
                    bool cond:16_1 = *(var_9c + 4) != 1
                    *(var_9c + 4)
                    *(var_9c + 4) -= 1
                    
                    if (not(cond:16_1))
                        (*(*var_9c + 4))(eax_2)
                        int128_t* ecx_35 = var_60
                        bool cond:18_1 = *(ecx_35 + 8) != 1
                        *(ecx_35 + 8)
                        *(ecx_35 + 8) -= 1
                        
                        if (not(cond:18_1))
                            (*(*ecx_35 + 8))()
                
                if (var_55_3 != 0)
                    void var_98
                    eax_48 = sub_54d980(*(arg1 + 0x1568), &var_98, 0)
                    int128_t* var_94
                    edx_16 = var_94
                    goto label_5f50ac
                
                ecx_23 = ecx_23
            else
                void var_88
                eax_48 = sub_54d980(ecx_32, &var_88, *var_68_2)
                edx_16 = var_84_2
            label_5f50ac:
                int32_t eax_54 = *eax_48
                var_60 = edx_16
                ecx_23 += *(eax_54 + 0x14)
                
                if (edx_16 != 0)
                    bool cond:19_1 = *(edx_16 + 4) != 1
                    *(edx_16 + 4)
                    *(edx_16 + 4) -= 1
                    
                    if (not(cond:19_1))
                        (*(*edx_16 + 4))(eax_2)
                        int128_t* ecx_40 = var_60
                        bool cond:20_1 = *(ecx_40 + 8) != 1
                        *(ecx_40 + 8)
                        *(ecx_40 + 8) -= 1
                        
                        if (not(cond:20_1))
                            (*(*ecx_40 + 8))()
                    
                    ecx_23 = ecx_23
        
        var_68_2 += 4
        i_3 = var_70.d + 0x130
        var_70.d = i_3
        i_5 = i_3
    while (i_3 s< 0x1300)
    
    int32_t var_8_2 = 0xffffffff
    int32_t* esi_1 = var_8c
    
    if (esi_1 != 0)
        i_3 = &esi_1[1]
        bool cond:12_1 = *i_3 != 1
        *i_3
        *i_3 -= 1
        
        if (not(cond:12_1))
            (*(*esi_1 + 4))(eax_2)
            i_3 = &esi_1[2]
            int32_t edi_6 = *i_3
            *i_3 -= 1
            
            if (edi_6 == 1)
                i_3 = (*(*esi_1 + 8))()

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return i_3
