// 函数: sub_4a39e3
// 地址: 0x4a39e3
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t j = 0
int32_t i = 0
int32_t edi
int32_t var_1c = edi

if (*(arg1 + 4) u> 0)
    do
        void* eax_2 = *(*(arg1 + 0x10) + (i << 2))
        *(eax_2 + 0x28) = 0xffffffff
        i += 1
        *(eax_2 + 0x2c) = 0
        *(eax_2 + 0x30) = 0
        *(eax_2 + 0x20) = 0
    while (i u< *(arg1 + 4))

int32_t i_1 = 0

if (*(arg1 + 8) u> 0)
    do
        void* eax_4 = *(*(arg1 + 0x14) + (i_1 << 2))
        *(eax_4 + 0x34) = i_1
        i_1 += 1
        *(eax_4 + 0x54) = 0xffffffff
        *(eax_4 + 0x58) = 0
        *(eax_4 + 0x5c) = 0
        *(eax_4 + 0x48) = 0xffffffff
        *(eax_4 + 0x4c) = 0xffffffff
        *(eax_4 + 0x50) = 0xffffffff
    while (i_1 u< *(arg1 + 8))

int32_t var_10 = 0

if (*(arg1 + 0xdc) != 0)
    int32_t i_2 = 0
    
    if (*(arg1 + 4) u> 0)
        do
            void* ecx_1 = *(*(arg1 + 0x10) + (i_2 << 2))
            i_2 += 1
            *(ecx_1 + 0x10) = 0
        while (i_2 u< *(arg1 + 4))
    
    int32_t i_3 = 0
    
    if (*(arg1 + 8) u> 0)
        do
            void* ecx_2 = *(*(arg1 + 0x14) + (i_3 << 2))
            void* eax_7 = *(*(arg1 + 0x10) + (*(ecx_2 + 4) << 2))
            char edx_2 = (*(eax_7 + 4)).b
            
            if ((edx_2 & 0x40) == 0 && (edx_2 & 2) != 0)
                int32_t ecx_4 = *(ecx_2 + 0xc) + 1
                
                if (*(eax_7 + 0x10) u< ecx_4)
                    *(eax_7 + 0x10) = ecx_4
            
            i_3 += 1
        while (i_3 u< *(arg1 + 8))
    
    int32_t i_9 = *(arg1 + 4)
    int32_t eax_8 = 0
    
    if (i_9 u> 0)
        int32_t* ecx_5 = *(arg1 + 0x10)
        int32_t i_4
        
        do
            eax_8 += *(*ecx_5 + 0x10)
            ecx_5 = &ecx_5[1]
            i_4 = i_9
            i_9 -= 1
        while (i_4 != 1)
    
    int32_t eax_9 = eax_8 << 4
    int32_t eax_10 = sub_745f3f(eax_9)
    var_10 = eax_10
    
    if (eax_10 == 0)
        return 0x8007000e
    
    __builtin_memset(__builtin_memset(var_10, 0xffffffff, eax_9 u>> 2 << 2), 0xff, eax_9 & 3)
    int32_t ecx_11 = 0
    int32_t i_5 = 0
    
    if (*(arg1 + 4) u> 0)
        int32_t eax_12 = *(arg1 + 0x10)
        
        do
            int32_t edi_7 = *(*(*(arg1 + 0x10) + (i_5 << 2)) + 0x10)
            int32_t edi_8 = neg.d(edi_7)
            *(*(eax_12 + (i_5 << 2)) + 0x20) =
                sbb.d(edi_8, edi_8, edi_7 != 0) & ((ecx_11 << 4) + var_10)
            eax_12 = *(arg1 + 0x10)
            ecx_11 += *(*(eax_12 + (i_5 << 2)) + 0x10)
            i_5 += 1
        while (i_5 u< *(arg1 + 4))
        
        j = 0

int32_t i_6 = 0

if (*(arg1 + 0xc) u> 0)
    do
        int32_t* edi_12 = *(*(arg1 + 0x18) + (i_6 << 2))
        
        if (edi_12 != 0 && (*(edi_12 + 2) & 0xfff0) != 0)
            if (edi_12[1] u> 0)
                do
                    sub_4a3858(arg1, *(edi_12[2] + (j << 2)), i_6)
                    j += 1
                while (j u< edi_12[1])
            
            int32_t j_1 = 0
            
            if (edi_12[3] u> 0)
                do
                    sub_4a38b6(arg1, *(edi_12[4] + (j_1 << 2)), i_6)
                    j_1 += 1
                while (j_1 u< edi_12[3])
            
            if ((*edi_12 & 0xfff00000) == 0x10000000 && (*(arg1 + 0xcc) & 4) == 0)
                int32_t j_2 = 0
                
                if (edi_12[3] u> 0)
                    do
                        int32_t eax_19 = *(arg1 + 0x14)
                        int32_t edx_5 = j_2 << 2
                        void* ecx_17 = *(eax_19 + (*(edx_5 + edi_12[4]) << 2))
                        void* eax_20 = *(eax_19 + (*(edx_5 + edi_12[2]) << 2))
                        int16_t edx_9 = (*(*(*(arg1 + 0x10) + (*(ecx_17 + 4) << 2)) + 4)).w
                        
                        if ((edx_9 & 0x1020) == 0 && (edx_9.b & 1) != 0 && *(eax_20 + 0x3c) == 0)
                            int32_t edx_10 = *(ecx_17 + 0x34)
                            *(ecx_17 + 0x34) = *(eax_20 + 0x34)
                            *(eax_20 + 0x34) = edx_10
                        
                        j_2 += 1
                    while (j_2 u< edi_12[3])
            
            j = 0
        
        i_6 += 1
    while (i_6 u< *(arg1 + 0xc))

int32_t i_7 = 0

if (*(arg1 + 8) u> 0)
    do
        void* eax_24 = *(*(arg1 + 0x14) + (i_7 << 2))
        void* ecx_19 = *(*(arg1 + 0x10) + (*(eax_24 + 4) << 2))
        int32_t edx_12 = *(ecx_19 + 0x28)
        
        if (*(eax_24 + 0x54) u> edx_12)
            *(eax_24 + 0x54) = edx_12
        
        int32_t ecx_20 = *(ecx_19 + 0x2c)
        
        if (*(eax_24 + 0x58) u< ecx_20)
            *(eax_24 + 0x58) = ecx_20
        
        i_7 += 1
    while (i_7 u< *(arg1 + 8))

if (*(arg1 + 0xdc) != 0)
    int32_t i_8 = 0
    
    if (*(arg1 + 8) u> 0)
        do
            int32_t ecx_21 = *(arg1 + 0x14)
            void* eax_25 = *(ecx_21 + (i_8 << 2))
            int32_t edx_13 = *(eax_25 + 0x4c)
            
            if (edx_13 == 0xffffffff)
                *(eax_25 + 0x4c) = 0
            else
                void* ecx_22 = *(ecx_21 + (edx_13 << 2))
                int32_t edx_14 = *(ecx_22 + 0x58)
                *(eax_25 + 0x4c) = edx_14
                int32_t ecx_23 = *(ecx_22 + 0x48)
                
                if (edx_14 u<= ecx_23)
                    *(eax_25 + 0x4c) = ecx_23 + 1
            
            int32_t ecx_25 = *(eax_25 + 0x50)
            
            if (ecx_25 == 0xffffffff)
                *(eax_25 + 0x50) = 0xffffffff
            else
                void* ecx_26 = *(*(arg1 + 0x14) + (ecx_25 << 2))
                int32_t edx_16 = *(ecx_26 + 0x54)
                *(eax_25 + 0x50) = edx_16
                int32_t ecx_27 = *(ecx_26 + 0x48)
                
                if (edx_16 u> ecx_27)
                    *(eax_25 + 0x50) = ecx_27
            
            i_8 += 1
        while (i_8 u< *(arg1 + 8))

if (*(arg1 + 0xd8) != 0)
    sub_4a3918(arg1)

j__free(var_10)
return 0
