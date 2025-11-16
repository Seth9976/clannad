// 函数: sub_40ec70
// 地址: 0x40ec70
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* ecx = arg3
int32_t* ebp = *(ecx + 0x510)
int32_t edx = *(ecx + 0x504)
int32_t* var_16c = ebp
int32_t var_158 = edx
void* eax_2 = *(*(*(arg2 + 0x40) + 4) + 0x1c)
int32_t eax_3 = *(eax_2 + 0xb20)

if (arg4 == 0)
    sub_410990(arg1, 0, 1)
    int32_t eax_74
    int32_t edx_41
    edx_41:eax_74 = sx.q(*(arg2 + 0x24))
    int32_t ecx_48 = (eax_74 - edx_41) s>> 1 << 2
    __builtin_memset(__builtin_memset(arg5, 0, ecx_48 u>> 2 << 2), 0, ecx_48 & 3)
    data_640c84 += 1
    return 0

if (edx s> 0)
    int32_t* ebx_1 = arg4
    int32_t var_170_1 = edx
    bool cond:4_1
    
    do
        int32_t esi_1 = *ebx_1
        int32_t ecx_2 = esi_1 & 0x7fff
        
        switch (ebp[0xd0] - 1)
            case 0
                ecx_2 s>>= 2
            case 1
                ecx_2 s>>= 3
            case 2
                ecx_2 s/= 0xc
                edx = var_158
            case 3
                ecx_2 s>>= 4
        
        *ebx_1 = (esi_1 & 0x8000) | ecx_2
        ebx_1 = &ebx_1[1]
        cond:4_1 = var_170_1 != 1
        var_170_1 -= 1
    while (cond:4_1)
    ecx = arg3

int32_t var_104 = *arg4
int32_t eax_10 = arg4[1]

if (edx s> 2)
    void* ebx_2 = &arg4[2]
    void* var_168_1 = &ebp[0xd3]
    void* eax_12 = ecx + 0x30c
    void* var_160_1 = eax_12
    int32_t* ecx_5 = &var_104 - arg4
    int32_t var_15c_1 = edx - 2
    bool cond:10_1
    
    do
        int32_t esi_4 = *(eax_12 + 0xfc)
        int32_t edi_1 = *eax_12
        int32_t eax_14 =
            sub_40e4e0(ebp[esi_4 + 0xd1], ebp[edi_1 + 0xd1], arg4[esi_4], arg4[edi_1], *var_168_1)
        int32_t ecx_7 = *ebx_2
        
        if ((ecx_7:1.b & 0x80) != 0 || eax_14 == ecx_7)
            eax_14:1.b |= 0x80
            *ebx_2 = eax_14
            *(ecx_5 + ebx_2) = 0
        else
            int32_t edx_9 = *(arg3 + 0x50c) - eax_14
            
            if (edx_9 s>= eax_14)
                edx_9 = eax_14
            
            int32_t ecx_8 = ecx_7 - eax_14
            int32_t ecx_9
            
            if (ecx_7 - eax_14 s>= 0)
                if (ecx_8 s< edx_9)
                    ecx_9 = ecx_8 << 1
                else
                    ecx_9 = ecx_8 + edx_9
            else if (ecx_8 s>= neg.d(edx_9))
                ecx_9 = 0xffffffff - ecx_8 * 2
            else
                ecx_9 = edx_9 - ecx_8 - 1
            
            *(ecx_5 + ebx_2) = ecx_9
            arg4[esi_4] &= 0x7fff
            arg4[edi_1] &= 0x7fff
        
        ebp = var_16c
        eax_12 = var_160_1 + 4
        ebx_2 += 4
        cond:10_1 = var_15c_1 != 1
        var_160_1 = eax_12
        var_168_1 += 4
        var_15c_1 -= 1
    while (cond:10_1)

sub_410990(arg1, 1, 1)
void* edi_2 = arg3
uint32_t edx_16 = *(edi_2 + 0x50c) - 1
*(edi_2 + 0x51c) += 1
int32_t eax_20 = sub_40c650(edx_16)
uint32_t eax_23 = *(edi_2 + 0x50c) - 1
*(edi_2 + 0x518) += eax_20 << 1
int32_t eax_24 = sub_40c650(eax_23)
sub_410990(arg1, var_104, eax_24)
sub_410990(arg1, eax_10, sub_40c650(*(edi_2 + 0x50c) - 1))
int32_t var_158_1 = 0
int32_t var_16c_1 = 2

if (*ebp s> 0)
    void* var_170_3 = &ebp[1]
    bool cond:5_1
    
    do
        int32_t ebx_3 = *var_170_3
        int32_t var_144
        __builtin_memset(&var_144, 0, 0x20)
        int32_t ecx_20 = ebp[ebx_3 + 0x30]
        int32_t eax_28 = ebp[ebx_3 + 0x20]
        int32_t esi_8 = 1 << ecx_20.b
        int32_t var_160_2 = 0
        int32_t var_15c_2 = 0
        int32_t __saved_ebx
        
        if (ecx_20 != 0)
            void var_124
            
            if (esi_8 s> 0)
                void* edx_22 = &var_124
                void* eax_31 = &ebp[(ebx_3 + 0xa) * 8]
                int32_t var_164_1 = esi_8
                bool cond:8_1
                
                do
                    int32_t ecx_21 = *eax_31
                    
                    if (ecx_21 s>= 0)
                        edi_2 = arg3
                        *edx_22 = *(*(eax_2 + (ecx_21 << 2) + 0x720) + 4)
                    else
                        *edx_22 = 1
                    
                    eax_31 += 4
                    edx_22 += 4
                    cond:8_1 = var_164_1 != 1
                    var_164_1 -= 1
                while (cond:8_1)
            
            if (eax_28 s> 0)
                int32_t* ebx_4 = &var_144
                int32_t var_164_2 = eax_28
                void* edi_4 = &(&__saved_ebx)[var_16c_1 + 0x1f]
                bool cond:9_1
                
                do
                    int32_t eax_33 = 0
                    
                    if (esi_8 s> 0)
                        void* edx_23 = &var_124
                        
                        do
                            if (*edi_4 s< *edx_23)
                                *ebx_4 = eax_33
                                break
                            
                            eax_33 += 1
                            edx_23 += 4
                        while (eax_33 s< esi_8)
                    
                    edi_4 += 4
                    int32_t edx_25 = *ebx_4 << var_15c_2.b
                    ebx_4 = &ebx_4[1]
                    var_160_2 |= edx_25
                    cond:9_1 = var_164_2 != 1
                    var_15c_2 += ecx_20
                    var_164_2 -= 1
                while (cond:9_1)
                edi_2 = arg3
            
            int32_t eax_41 = sub_407f90(eax_3 + ebp[ebx_3 + 0x40] * 0x2c, var_160_2, arg1)
            *(edi_2 + 0x514) += eax_41
        
        int32_t eax_50 = eax_28
        
        if (eax_50 s> 0)
            int32_t* esi_9 = &var_144
            int32_t var_164_3 = eax_50
            void* ebx_5 = &(&__saved_ebx)[var_16c_1 + 0x1f]
            bool cond:7_1
            
            do
                int32_t eax_44 = ebp[(ebx_3 << 3) + 0x50 + *esi_9]
                
                if (eax_44 s>= 0)
                    int32_t ecx_39 = *ebx_5
                    void* eax_46 = eax_3 + eax_44 * 0x2c
                    
                    if (ecx_39 s< *(eax_46 + 4))
                        int32_t eax_47 = sub_407f90(eax_46, ecx_39, arg1)
                        *(edi_2 + 0x518) += eax_47
                
                esi_9 = &esi_9[1]
                ebx_5 += 4
                cond:7_1 = var_164_3 != 1
                var_164_3 -= 1
            while (cond:7_1)
            eax_50 = eax_28
        
        var_16c_1 += eax_50
        cond:5_1 = var_158_1 + 1 s< *ebp
        var_158_1 += 1
        var_170_3 += 4
    while (cond:5_1)

int32_t i_1 = 0
int32_t ecx_44 = ebp[0xd0] * *arg4
int32_t i_3 = 0
int32_t i_2 = 1

if (*(arg3 + 0x504) s> 1)
    void* var_170_4 = arg3 + 0x108
    int32_t i
    
    do
        int32_t edx_33 = *var_170_4
        int32_t esi_10 = arg4[edx_33]
        int32_t eax_58 = esi_10 & 0x7fff
        
        if (eax_58 == esi_10)
            i_1 = ebp[edx_33 + 0xd1]
            int32_t esi_12 = ebp[0xd0] * eax_58
            sub_40f240(i_3, i_1, ecx_44, esi_12, arg5)
            i_3 = i_1
            ecx_44 = esi_12
        
        i = i_2 + 1
        var_170_4 += 4
        i_2 = i
    while (i s< *(arg3 + 0x504))

int32_t eax_62
int32_t edx_38
edx_38:eax_62 = sx.q(*(arg2 + 0x24))

if (i_1 s< (eax_62 - edx_38) s>> 1)
    int32_t* esi_13 = arg5 + (i_1 << 2)
    int32_t eax_67
    int32_t edx_40
    
    do
        *esi_13 = ecx_44
        i_1 += 1
        esi_13 = &esi_13[1]
        edx_40:eax_67 = sx.q(*(arg2 + 0x24))
    while (i_1 s< (eax_67 - edx_40) s>> 1)

data_640c84 += 1
return 1
