// 函数: sub_4a4788
// 地址: 0x4a4788
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_1c = edi
int32_t i = 0
int32_t var_c = 0

if (*(arg1 + 4) u> 0)
    do
        void* eax_2 = *(*(arg1 + 0x10) + (i << 2))
        i += 1
        *(eax_2 + 0x28) = 0xffffffff
        *(eax_2 + 0x24) = 0xffffffff
    while (i u< *(arg1 + 4))

int32_t i_1 = 0

if (*(arg1 + 8) u> 0)
    do
        void* eax_4 = *(*(arg1 + 0x14) + (i_1 << 2))
        i_1 += 1
        *(eax_4 + 0x54) = 0xffffffff
        *(eax_4 + 0x48) = 0xffffffff
    while (i_1 u< *(arg1 + 8))

int32_t i_2 = 0

if (*(arg1 + 0xc) u> 0)
    do
        void* ebx_1 = *(*(arg1 + 0x18) + (i_2 << 2))
        void* var_10_1 = ebx_1
        
        if ((*(ebx_1 + 2) & 0xfff0) != 0)
            int32_t j = 0
            
            if (*(ebx_1 + 4) u> 0)
                do
                    void* edi_1 = *(*(arg1 + 0x14) + (*(*(ebx_1 + 8) + (j << 2)) << 2))
                    
                    if (i_2 u< *(edi_1 + 0x54))
                        *(edi_1 + 0x54) = i_2
                    
                    void* edx_3 = edi_1 + 8
                    void* ecx_3 = edi_1
                    
                    if (*edx_3 != 0xffffffff)
                        do
                            void* ecx_5 = *(*(arg1 + 0x10) + (*(ecx_3 + 4) << 2))
                            
                            if (i_2 u< *(ecx_5 + 0x28))
                                *(ecx_5 + 0x28) = i_2
                            
                            ecx_3 = *(*(arg1 + 0x14) + (*edx_3 << 2))
                            
                            if (i_2 u< *(ecx_3 + 0x54))
                                *(ecx_3 + 0x54) = i_2
                            
                            edx_3 = ecx_3 + 8
                        while (*edx_3 != 0xffffffff)
                        
                        ebx_1 = var_10_1
                    
                    void* ecx_9 = edi_1 + 0x14
                    
                    while (*ecx_9 != 0xffffffff)
                        void* ecx_8 = *(*(arg1 + 0x14) + (*ecx_9 << 2))
                        
                        if (i_2 u< *(ecx_8 + 0x54))
                            *(ecx_8 + 0x54) = i_2
                        
                        ecx_9 = ecx_8 + 0x14
                    
                    j += 1
                while (j u< *(ebx_1 + 4))
            
            int32_t j_1 = 0
            
            if (*(ebx_1 + 0xc) u> 0)
                do
                    void* edx_8 = *(*(arg1 + 0x14) + (*(*(ebx_1 + 0x10) + (j_1 << 2)) << 2))
                    
                    if (i_2 u< *(edx_8 + 0x48))
                        *(edx_8 + 0x48) = i_2
                    
                    void* ecx_13 = edx_8
                    
                    if (*(edx_8 + 8) != 0xffffffff)
                        void* ecx_15 = *(*(arg1 + 0x10) + (*(edx_8 + 4) << 2))
                        
                        if (i_2 u< *(ecx_15 + 0x24))
                            *(ecx_15 + 0x24) = i_2
                        
                        ecx_13 = *(*(arg1 + 0x14) + (*(edx_8 + 8) << 2))
                        
                        if (i_2 u< *(ecx_13 + 0x54))
                            *(ecx_13 + 0x54) = i_2
                    
                    if (*(ecx_13 + 8) != 0xffffffff)
                        do
                            void* edi_5 = *(*(arg1 + 0x10) + (*(ecx_13 + 4) << 2))
                            
                            if (i_2 u< *(edi_5 + 0x28))
                                *(edi_5 + 0x28) = i_2
                            
                            ecx_13 = *(*(arg1 + 0x14) + (*(ecx_13 + 8) << 2))
                            
                            if (i_2 u< *(ecx_13 + 0x54))
                                *(ecx_13 + 0x54) = i_2
                        while (*(ecx_13 + 8) != 0xffffffff)
                        
                        ebx_1 = var_10_1
                    
                    while (*(edx_8 + 0x14) != 0xffffffff)
                        edx_8 = *(*(arg1 + 0x14) + (*(edx_8 + 0x14) << 2))
                        
                        if (i_2 u< *(edx_8 + 0x54))
                            *(edx_8 + 0x54) = i_2
                    
                    j_1 += 1
                while (j_1 u< *(ebx_1 + 0xc))
        
        i_2 += 1
    while (i_2 u< *(arg1 + 0xc))

sub_4a3918(arg1)
int32_t i_3 = 0

if (*(arg1 + 8) u> 0)
    do
        void* edi_7 = *(*(arg1 + 0x14) + (i_3 << 2))
        void* eax_7 = *(*(arg1 + 0x10) + (*(edi_7 + 4) << 2))
        int32_t ecx_23 = *(eax_7 + 0x28)
        
        if (ecx_23 u< *(edi_7 + 0x54))
            *(edi_7 + 0x54) = ecx_23
        
        int32_t ecx_24 = *(eax_7 + 0x24)
        
        if (ecx_24 u< *(edi_7 + 0x48))
            *(edi_7 + 0x48) = ecx_24
        
        int32_t eax_8 = *(eax_7 + 4)
        int32_t edx_12 = eax_8 & 0x10
        int32_t ecx_25
        
        if (edx_12 == 0)
            ecx_25 = *(edi_7 + 0x54)
        
        if (edx_12 == 0 && ecx_25 != 0xffffffff && ecx_25 u<= *(edi_7 + 0x48))
            void* edi_8 = *(edi_7 + 0x60)
            void* eax_9
            
            if (edi_8 != 0 && *(edi_8 + 4) == 6)
                eax_9 = *(edi_8 + 0x14)
            
            if (edi_8 == 0 || *(edi_8 + 4) != 6 || eax_9 == 0 || *(eax_9 + 4) != 3)
                int32_t var_20_2 = ecx_25
                int32_t i_4 = i_3
                sub_4a4100(arg1, nullptr, 0, 
                    "internal error: argument used without having been initialized (A%u, I%u)")
                var_c = 1
            else
                if (*(edi_8 + 0x28) == 0)
                    int32_t var_20_1 = *(eax_9 + 0x18)
                    sub_4a4100(arg1, *(*(*(arg1 + 0x18) + (ecx_25 << 2)) + 0x3c), 0xfa0, 
                        "variable '%s' used without having been completely initialized")
                    *(edi_8 + 0x28) = 1
                
                var_c = 1
        else if ((eax_8.b & 0x20) == 0 || *(edi_7 + 0x48) != 0xffffffff)
            int32_t ecx_26
            
            if ((eax_8.b & 2) == 0)
                ecx_26 = *(edi_7 + 0x48)
            
            if ((eax_8.b & 2) == 0 && ecx_26 != 0xffffffff)
                int32_t var_20_3 = ecx_26
                int32_t i_5 = i_3
                sub_4a4100(arg1, nullptr, 0, 
                    "internal error: cannot write to argument pool (A%u, I%u)")
                var_c = 1
            else if ((eax_8.b & 0xd) == 0 && *(edi_7 + 0x54) != 0xffffffff)
                int32_t i_8 = i_3
                sub_4a4100(arg1, nullptr, 0, "internal error: cannot read from argument pool (A%u)")
                var_c = 1
            else if (*(arg1 + 0xd8) != 0 && (eax_8 & 0x10120) == 0 && *(edi_7 + 0x54) == 0xffffffff)
                if (edx_12 != 0)
                label_4a4a64:
                    int32_t edi_9 = *(edi_7 + 0x48)
                    
                    if (edi_9 == 0xffffffff)
                        int32_t i_9 = i_3
                        sub_4a4100(arg1, nullptr, 0, 
                            "internal error: argument was never used (A%u)")
                        var_c = 1
                    else
                        int32_t var_20_4 = edi_9
                        int32_t i_6 = i_3
                        sub_4a4100(arg1, nullptr, 0, 
                            "internal error: argument was never used (A%u, I%u)")
                        var_c = 1
                else
                    int32_t eax_12 = *(edi_7 + 0x48)
                    
                    if (eax_12 != 0xffffffff && sub_49e81b(*(*(arg1 + 0x18) + (eax_12 << 2))) == 0
                            && (**(*(arg1 + 0x18) + (*(edi_7 + 0x48) << 2)) & 0xfff00000)
                            != 0x20900000)
                        goto label_4a4a64
        else
            int32_t i_7 = i_3
            sub_4a4100(arg1, nullptr, 0, 
                "internal error: output argument was never initialized (A%u)")
            var_c = 1
        
        i_3 += 1
    while (i_3 u< *(arg1 + 8))
    
    if (var_c != 0)
        return 0x80004005

return 0
