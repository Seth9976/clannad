// 函数: sub_4b8571
// 地址: 0x4b8571
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_14 = nullptr
int32_t var_c = 0
int32_t edi
int32_t var_80 = edi
void var_5c
__builtin_memset(&var_5c, 0, 0x18)
int32_t var_74[0x6]
__builtin_memset(&var_74, 0, 0x18)
int32_t var_44[0x6]
__builtin_memset(&var_44, 0, 0x18)
__builtin_memset(arg1 + 0x40c, 0xffffffff, 0x18)
__builtin_memset(arg1 + 0x424, 0xffffffff, 0x18)
int32_t var_18 = 1
int32_t var_20 = 0
int32_t i = 0
void* const var_8c_2
int32_t var_88_1
char* var_84_1
int32_t var_10

if (*(arg1 + 0xc) u> 0)
    do
        int32_t* eax_2 = *(*(arg1 + 0x18) + (i << 2))
        int32_t ecx_1 = *eax_2
        int32_t edx_2 = ecx_1 & 0xfff00000
        eax_2[9] = 0
        int32_t __saved_ebp
        
        if (edx_2 == 0x60000000 || edx_2 == 0x60500000 || edx_2 == 0x60a00000 || edx_2 == 0x72e00000
            || edx_2 == 0x60700000 || edx_2 == 0x60f00000)
        label_4b87c5:
            int32_t eax_19
            
            if (edx_2 != 0x11000000)
                eax_19 = *(eax_2[2] + ((ecx_1 & 0xfffff) << 2))
            else
            label_4b87ca:
                eax_19 = *eax_2[2]
            
            void* eax_21 = *(*(arg1 + 0x14) + (eax_19 << 2))
            
            if (*(eax_21 + 4) != *(arg1 + 0x80) || *(eax_21 + 0x3c) != 0)
                var_18 = 0
            else
                if (*(eax_21 + 0x6c) != 3)
                    var_84_1 = "texture loads or clips cannot be from inputs not marked TEXCOORD"
                    var_88_1 = 0x11a1
                    var_8c_2 = *(eax_21 + 0x60)
                label_4b8aa7:
                    sub_4a4100(arg1, var_8c_2, var_88_1, var_84_1)
                    return 0x80004005
                
                void* eax_22 = &(&__saved_ebp)[zx.d(*(eax_21 + 0x6d)) - 0x16]
                
                if (*eax_22 != 0 && zx.d((*(arg1 + 0xc8)).w) != 0x104)
                    var_18 = 0
                
                *eax_22 = 1
        else
            if (edx_2 == 0x11000000)
                goto label_4b87ca
            
            if (edx_2 == 0x72c00000 || edx_2 == 0x72d00000)
                goto label_4b87c5
            
            int32_t edi_4 = ecx_1 & 0xfffff
            int32_t var_28_1 = edi_4
            
            if (edi_4 != 0 && ecx_1 != 0)
                var_10 = 0
                
                if (eax_2[1] u> 0)
                    int32_t ecx_2 = eax_2[1]
                    int32_t* var_1c_1 = eax_2[2]
                    
                    do
                        void* ecx_4 = *(*(arg1 + 0x14) + (*var_1c_1 << 2))
                        
                        if (*(ecx_4 + 4) == *(arg1 + 0x80) && *(ecx_4 + 0x6c) == 3)
                            *(ecx_4 + 0x6d)
                            
                            if ((&__saved_ebp)[zx.d(*(ecx_4 + 0x6d)) - 0x16] != 0
                                    && zx.d((*(arg1 + 0xc8)).w) != 0x104
                                    && var_44[zx.d(*(ecx_4 + 0x6d))] == 0)
                                var_18 = 0
                            
                            (&__saved_ebp)[zx.d(*(ecx_4 + 0x6d)) - 0x16] = 1
                            int32_t eax_9 = var_10
                            int32_t ecx_7 = eax_9 + edi_4
                            var_74[zx.d(*(ecx_4 + 0x6d))] = 1
                            
                            if (eax_9 u< ecx_7)
                                int32_t* ebx_1 = var_1c_1
                                int32_t eax_10 = (&__saved_ebp)[zx.d(*(ecx_4 + 0x6d)) - 0x10]
                                int32_t j_1 = ecx_7 - var_10
                                int32_t j
                                
                                do
                                    int32_t edi_8 = *(*(*(arg1 + 0x14) + (*ebx_1 << 2)) + 0x10) + 1
                                    
                                    if (edi_8 u> eax_10)
                                        eax_10 = edi_8
                                    
                                    ebx_1 = &ebx_1[1]
                                    j = j_1
                                    j_1 -= 1
                                while (j != 1)
                                edi_4 = var_28_1
                                (&__saved_ebp)[zx.d(*(ecx_4 + 0x6d)) - 0x10] = eax_10
                        
                        var_10 += edi_4
                        var_1c_1 = &var_1c_1[edi_4]
                    while (var_10 u< ecx_2)
                
                var_20 += 1
        i += 1
    while (i u< *(arg1 + 0xc))
    
    if (var_20 u> 0x10)
        var_18 = 0

int32_t i_1 = 0

if (*(arg1 + 8) u> 0)
    do
        void* ecx_11 = *(*(arg1 + 0x14) + (i_1 << 2))
        i_1 += 1
        *(ecx_11 + 0x40) = 0
    while (i_1 u< *(arg1 + 8))

int32_t ebx_2 = *(arg1 + 0xc)

if (var_18 != 0)
    *(arg1 + 0x22c) = 0
    int32_t eax_15 = sub_745f3f(0x800)
    *(arg1 + 0x230) = eax_15
    
    if (eax_15 == 0)
        return 0x8007000e
    
    __builtin_memset(eax_15, 0, 0x800)
    int32_t eax_17 = sub_4b7dc3(arg1, *(arg1 + 0x230), arg1 + 0x224, *(arg1 + 0x18), ebx_2, 0, 0)
    
    if (eax_17 s< 0)
        return eax_17
    
    goto label_4b8a54

int32_t eax_23 = sub_745f3f(0x800)
*(arg1 + 0x22c) = eax_23

if (eax_23 == 0)
    return 0x8007000e

int32_t eax_24 = sub_745f3f(0x800)
*(arg1 + 0x230) = eax_24

if (eax_24 == 0)
    return 0x8007000e

int32_t* eax_25 = sub_745f3f(0x800)
var_14 = eax_25

if (eax_25 == 0)
    return 0x8007000e

var_c = sub_745f3f(0x800)
__builtin_memset(*(arg1 + 0x22c), 0, 0x800)
__builtin_memset(*(arg1 + 0x230), 0, 0x800)
__builtin_memset(var_14, 0, 0x800)
__builtin_memset(var_c, 0, 0x800)
bool cond:7_1 = *(arg1 + 0xc) u<= 0
*(arg1 + 0x220) = 0
*(arg1 + 0x224) = 0
var_10 = 0
int32_t var_8 = 0
int32_t edi_16

if (cond:7_1)
label_4b89d3:
    int32_t edx_10 = 0
    
    if (var_10 u> 0)
        int32_t* eax_36 = var_14
        int32_t* ecx_30 = var_c - eax_36
        
        do
            *(ecx_30 + eax_36) = *eax_36
            *eax_36 = 0
            edx_10 += 1
            eax_36 = &eax_36[1]
        while (edx_10 u< var_10)
    
    edi_16 = sub_4b7dc3(arg1, *(arg1 + 0x230), arg1 + 0x224, *(arg1 + 0x18), ebx_2, 0, 0)
    
    if (edi_16 s>= 0)
        int32_t eax_39 = 0
        
        if (var_10 u> 0)
            do
                *(*(var_c + (eax_39 << 2)) + 0x24) = 0
                eax_39 += 1
            while (eax_39 u< var_10)
        
        edi_16 = sub_4b7dc3(arg1, *(arg1 + 0x22c), arg1 + 0x220, var_c, var_10, *(arg1 + 0x230), 
            *(arg1 + 0x4c))
        
        if (edi_16 s>= 0)
        label_4b8a54:
            edi_16 = 0
            int32_t i_2 = 0
            
            if (*(arg1 + 8) u> 0)
                do
                    void* eax_43 = *(*(arg1 + 0x14) + (i_2 << 2))
                    
                    if (*(eax_43 + 0x40) == 1)
                        *(eax_43 + 4) = *(arg1 + 0x74)
                    
                    i_2 += 1
                while (i_2 u< *(arg1 + 8))
else
    while (true)
        if (var_8 u>= 0x200)
            var_84_1 = "program too big"
            var_88_1 = 0x11a2
            var_8c_2 = nullptr
            goto label_4b8aa7
        
        int32_t* eax_28 = *(*(arg1 + 0x18) + (var_8 << 2))
        int32_t ecx_24 = *eax_28
        int32_t edx_7 = ecx_24 & 0xfff00000
        
        if (edx_7 == 0x60000000 || edx_7 == 0x60500000 || edx_7 == 0x60a00000 || edx_7 == 0x72e00000
                || edx_7 == 0x60700000 || edx_7 == 0x60f00000 || edx_7 == 0x11000000
                || edx_7 == 0x72d00000 || edx_7 == 0x72c00000)
            int32_t ecx_25 = ecx_24 & 0xfffff
            int32_t var_24_1 = ecx_25
            
            if (edx_7 == 0x11000000)
                ecx_25 = 0
                var_24_1 = 0
            
            int32_t* edx_9 = eax_28[2] + (ecx_25 << 2)
            void* ecx_27 = *(*(arg1 + 0x14) + (*edx_9 << 2))
            int32_t edi_15 = *(ecx_27 + 4)
            
            if (edi_15 == *(arg1 + 0x88) || *(ecx_27 + 0x3c) != 0)
                edi_16 = sub_4b7bd3(arg1, edx_9, eax_28[1] - var_24_1, var_14, &var_10)
                
                if (edi_16 s< 0)
                    break
            else if (edi_15 == *(arg1 + 0x80))
                int32_t var_88_2
                char* var_84_2
                
                if (*(ecx_27 + 0x6c) != 3)
                    var_84_2 = "cannot perform dependent texture read which in any way is based on color inputs"
                    var_88_2 = 0x11a1
                label_4b8ac3:
                    sub_4a4100(arg1, nullptr, var_88_2, var_84_2)
                    edi_16 = 0x80004005
                    break
                
                if (var_74[zx.d(*(ecx_27 + 0x6d))] != 0 && zx.d((*(arg1 + 0xc8)).w) != 0x104)
                    var_84_2 =
                        "can read from texcoord and use it for texlookup only in ps_1_4 and higher"
                    var_88_2 = 0x11a8
                    goto label_4b8ac3
        
        var_8 += 1
        
        if (var_8 u>= *(arg1 + 0xc))
            goto label_4b89d3

if (var_14 != 0)
    j__free(var_14)

if (var_c != 0)
    j__free(var_c)

return edi_16
