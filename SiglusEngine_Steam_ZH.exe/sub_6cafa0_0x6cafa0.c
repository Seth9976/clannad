// 函数: sub_6cafa0
// 地址: 0x6cafa0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg3

if (arg3 == 0 || arg2 == 0)
    return 

int32_t edx = *(arg2 + 0x88)

if (edx != 0 && (*(arg2 + 0xe8) & arg4 & 0x4000) != 0)
    if (arg5 == 0xffffffff)
        int32_t i = 0
        
        if (*(arg2 + 0x80) s> 0)
            int32_t ecx = 0
            int32_t var_8_1 = 0
            
            do
                int32_t eax_5 = *(*(arg2 + 0x88) + ecx + 4)
                
                if (eax_5 != 0)
                    int32_t ecx_1 = *(arg3 + 0x258)
                    
                    if (ecx_1 == 0)
                        _free(eax_5)
                    else
                        ecx_1(arg3, eax_5)
                    
                    ecx = var_8_1
                
                i += 1
                ecx += 0x1c
                var_8_1 = ecx
            while (i s< *(arg2 + 0x80))
        
        int32_t eax_6 = *(arg2 + 0x88)
        
        if (eax_6 != 0)
            int32_t ecx_2 = *(arg3 + 0x258)
            
            if (ecx_2 == 0)
                _free(eax_6)
            else
                ecx_2(arg3, eax_6)
        
        *(arg2 + 0x88) = 0
        *(arg2 + 0x80) = 0
    else
        int32_t esi_2 = arg5 * 7
        sub_6d83a0(arg3, *(edx + (esi_2 << 2) + 4))
        *(*(arg2 + 0x88) + (esi_2 << 2) + 4) = 0

int32_t edx_2 = arg4

if ((*(arg2 + 0xe8) & edx_2 & 0x2000) != 0)
    *(arg2 + 8) &= 0xffffffef
    int32_t eax_9 = *(arg2 + 0x9c)
    
    if (eax_9 != 0)
        int32_t ecx_3 = *(arg3 + 0x258)
        
        if (ecx_3 == 0)
            _free(eax_9)
        else
            ecx_3(arg3, eax_9)
        
        edx_2 = arg4
    
    *(arg2 + 0x9c) = 0
    *(arg2 + 0x16) = 0

if ((*(arg2 + 0xe8) & edx_2 & 0x100) != 0)
    int32_t eax_12 = *(arg2 + 0x100)
    
    if (eax_12 != 0)
        int32_t ecx_4 = *(arg3 + 0x258)
        
        if (ecx_4 == 0)
            _free(eax_12)
        else
            ecx_4(arg3, eax_12)
    
    int32_t eax_13 = *(arg2 + 0x104)
    
    if (eax_13 != 0)
        int32_t ecx_5 = *(arg3 + 0x258)
        
        if (ecx_5 == 0)
            _free(eax_13)
        else
            ecx_5(arg3, eax_13)
    
    *(arg2 + 8) &= 0xffffbfff
    edx_2 = arg4
    *(arg2 + 0x100) = 0
    *(arg2 + 0x104) = 0

if (((*(arg2 + 0xe8)).b & edx_2.b) s< 0)
    int32_t eax_16 = *(arg2 + 0xd0)
    
    if (eax_16 != 0)
        int32_t ecx_6 = *(arg3 + 0x258)
        
        if (ecx_6 == 0)
            _free(eax_16)
        else
            ecx_6(arg3, eax_16)
    
    int32_t eax_17 = *(arg2 + 0xdc)
    
    if (eax_17 != 0)
        int32_t ecx_7 = *(arg3 + 0x258)
        
        if (ecx_7 == 0)
            _free(eax_17)
        else
            ecx_7(arg3, eax_17)
    
    bool cond:0_1 = *(arg2 + 0xe0) == 0
    *(arg2 + 0xd0) = 0
    *(arg2 + 0xdc) = 0
    
    if (not(cond:0_1))
        int32_t i_1 = 0
        
        if (*(arg2 + 0xe5) u> 0)
            do
                int32_t eax_19 = *(*(arg2 + 0xe0) + (i_1 << 2))
                
                if (eax_19 != 0)
                    int32_t ecx_8 = *(arg3 + 0x258)
                    
                    if (ecx_8 == 0)
                        _free(eax_19)
                    else
                        ecx_8(arg3, eax_19)
                
                i_1 += 1
            while (i_1 s< zx.d(*(arg2 + 0xe5)))
        
        int32_t eax_21 = *(arg2 + 0xe0)
        
        if (eax_21 != 0)
            int32_t ecx_9 = *(arg3 + 0x258)
            
            if (ecx_9 == 0)
                _free(eax_21)
            else
                ecx_9(arg3, eax_21)
        
        *(arg2 + 0xe0) = 0
    
    *(arg2 + 8) &= 0xfffffbff
    edx_2 = arg4

if (((*(arg2 + 0xe8)).b & edx_2.b & 0x10) != 0)
    int32_t eax_24 = *(arg2 + 0x74)
    
    if (eax_24 != 0)
        int32_t ecx_10 = *(arg3 + 0x258)
        
        if (ecx_10 == 0)
            _free(eax_24)
        else
            ecx_10(arg3, eax_24)
    
    int32_t eax_25 = *(arg2 + 0x78)
    
    if (eax_25 != 0)
        int32_t ecx_11 = *(arg3 + 0x258)
        
        if (ecx_11 == 0)
            _free(eax_25)
        else
            ecx_11(arg3, eax_25)
    
    *(arg2 + 8) &= 0xffffefff
    edx_2 = arg4
    *(arg2 + 0x74) = 0
    *(arg2 + 0x78) = 0

int32_t ecx_12 = *(arg2 + 0xf4)

if (ecx_12 != 0 && ((*(arg2 + 0xe8)).b & edx_2.b & 0x20) != 0)
    if (arg5 == 0xffffffff)
        int32_t i_2 = 0
        int32_t i_5 = 0
        
        if (*(arg2 + 0xf8) s> 0)
            int32_t* esi_5 = nullptr
            
            do
                int32_t eax_34 = *(esi_5 + *(arg2 + 0xf4))
                
                if (eax_34 != 0)
                    int32_t ecx_15 = *(arg3 + 0x258)
                    
                    if (ecx_15 == 0)
                        _free(eax_34)
                    else
                        ecx_15(arg3, eax_34)
                    
                    i_2 = i_5
                
                int32_t eax_36 = *(*(arg2 + 0xf4) + esi_5 + 8)
                
                if (eax_36 != 0)
                    int32_t ecx_16 = *(arg3 + 0x258)
                    
                    if (ecx_16 == 0)
                        _free(eax_36)
                    else
                        ecx_16(arg3, eax_36)
                    
                    i_2 = i_5
                
                i_2 += 1
                esi_5 = &esi_5[4]
                i_5 = i_2
            while (i_2 s< *(arg2 + 0xf8))
        
        int32_t eax_37 = *(arg2 + 0xf4)
        
        if (eax_37 != 0)
            int32_t ecx_17 = *(arg3 + 0x258)
            
            if (ecx_17 == 0)
                _free(eax_37)
            else
                ecx_17(arg3, eax_37)
        
        *(arg2 + 8) &= 0xffffdfff
        *(arg2 + 0xf4) = 0
        *(arg2 + 0xf8) = 0
    else
        int32_t esi_4 = arg5 * 2
        int32_t eax_29 = *(ecx_12 + (esi_4 << 3))
        
        if (eax_29 != 0)
            int32_t ecx_13 = *(arg3 + 0x258)
            
            if (ecx_13 == 0)
                _free(eax_29)
            else
                ecx_13(arg3, eax_29)
        
        int32_t eax_31 = *(*(arg2 + 0xf4) + (esi_4 << 3) + 8)
        
        if (eax_31 != 0)
            int32_t ecx_14 = *(arg3 + 0x258)
            
            if (ecx_14 == 0)
                _free(eax_31)
            else
                ecx_14(arg3, eax_31)
        
        int32_t eax_32 = *(arg2 + 0xf4)
        *(eax_32 + (esi_4 << 3)) = 0
        *(eax_32 + (esi_4 << 3) + 8) = 0

int32_t ecx_18 = *(arg2 + 0xec)

if (ecx_18 != 0 && (*(arg2 + 0xe8) & arg4 & 0x200) != 0)
    if (arg5 == 0xffffffff)
        int32_t i_3 = 0
        
        if (*(arg2 + 0xf0) s> 0)
            int32_t ecx_20 = 0
            int32_t var_8_2 = 0
            
            do
                int32_t eax_45 = *(*(arg2 + 0xec) + ecx_20 + 8)
                
                if (eax_45 != 0)
                    int32_t ecx_21 = *(arg3 + 0x258)
                    
                    if (ecx_21 == 0)
                        _free(eax_45)
                    else
                        ecx_21(arg3, eax_45)
                    
                    ecx_20 = var_8_2
                
                i_3 += 1
                ecx_20 += 0x14
                var_8_2 = ecx_20
            while (i_3 s< *(arg2 + 0xf0))
        
        int32_t eax_46 = *(arg2 + 0xec)
        
        if (eax_46 != 0)
            int32_t ecx_22 = *(arg3 + 0x258)
            
            if (ecx_22 == 0)
                _free(eax_46)
            else
                ecx_22(arg3, eax_46)
        
        *(arg2 + 0xec) = 0
        *(arg2 + 0xf0) = 0
    else
        int32_t esi_6 = arg5 * 5
        int32_t eax_41 = *(ecx_18 + (esi_6 << 2) + 8)
        
        if (eax_41 == 0)
            *(*(arg2 + 0xec) + (esi_6 << 2) + 8) = 0
        else
            int32_t ecx_19 = *(arg3 + 0x258)
            
            if (ecx_19 == 0)
                _free(eax_41)
                *(*(arg2 + 0xec) + (esi_6 << 2) + 8) = 0
            else
                ecx_19(arg3, eax_41)
                *(*(arg2 + 0xec) + (esi_6 << 2) + 8) = 0

int32_t ecx_23 = arg4

if (((*(arg2 + 0xe8)).b & ecx_23.b & 8) != 0)
    int32_t eax_49 = *(arg2 + 0xcc)
    
    if (eax_49 != 0)
        int32_t ecx_24 = *(arg3 + 0x258)
        
        if (ecx_24 == 0)
            _free(eax_49)
        else
            ecx_24(arg3, eax_49)
        
        ecx_23 = arg4
    
    *(arg2 + 8) &= 0xffffffbf
    *(arg2 + 0xcc) = 0

if ((*(arg2 + 0xe8) & ecx_23 & 0x1000) != 0)
    int32_t eax_52 = *(arg2 + 0x10)
    
    if (eax_52 != 0)
        int32_t ecx_25 = *(arg3 + 0x258)
        
        if (ecx_25 == 0)
            _free(eax_52)
        else
            ecx_25(arg3, eax_52)
        
        ecx_23 = arg4
    
    *(arg2 + 8) &= 0xfffffff7
    *(arg2 + 0x10) = 0
    *(arg2 + 0x14) = 0

if (((*(arg2 + 0xe8) & ecx_23).b & 0x40) != 0)
    if (*(arg2 + 0x108) != 0)
        int32_t i_4 = 0
        
        if (*(arg2 + 4) u> 0)
            do
                int32_t eax_55 = *(*(arg2 + 0x108) + (i_4 << 2))
                
                if (eax_55 != 0)
                    int32_t ecx_26 = *(arg3 + 0x258)
                    
                    if (ecx_26 == 0)
                        _free(eax_55)
                    else
                        ecx_26(arg3, eax_55)
                
                i_4 += 1
            while (i_4 u< *(arg2 + 4))
        
        arg1 = *(arg2 + 0x108)
        
        if (arg1 != 0)
            int32_t ecx_27 = *(arg3 + 0x258)
            
            if (ecx_27 == 0)
                _free(arg1)
            else
                ecx_27(arg3, arg1)
        
        ecx_23 = arg4
        *(arg2 + 0x108) = 0
    
    *(arg2 + 8) &= 0xffff7fff

if (arg5 != 0xffffffff)
    ecx_23 &= 0xffffbddf

*(arg2 + 0xe8) &= not.d(ecx_23)
