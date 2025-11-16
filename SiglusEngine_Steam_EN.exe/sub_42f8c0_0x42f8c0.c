// 函数: sub_42f8c0
// 地址: 0x42f8c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result_5 = 0
int32_t ebx = 0
int32_t result_2 = 0
*(arg2 + 0x148) = 0
uint32_t var_20 = 0
int32_t result_8 = 0xffffffff
int32_t result_7 = 0xffffffff
int32_t var_1c = 0
int32_t* edi = *(arg5 + 4)
int32_t result_1 = 0xffffffff
int32_t result_3 = 0xffffffff

if (edi u<= 0x1ff)
    sub_425430(edi, 1)
    
    if (*(edi * 0x74 + 0x13747b0) != 0)
        sub_426840(&result_1, 0, edi * 0x74 + 0x13747b0, &result_1, &result_3)
    
    result_7 = result_3
    result_8 = result_1

if (*(arg2 + 0x120) != 0)
    *(arg2 + 0x54) = *(arg2 + 0x124) + arg6
    *(arg2 + 0x58) = *(arg2 + 0x128) + arg7
    *(arg2 + 0x5c) = *(arg2 + 0x12c) + arg6
    *(arg2 + 0x60) = *(arg2 + 0x130) + arg7

uint32_t edi_3

if (result_8 s<= 0 || result_7 s<= 0)
    edi_3 = 0
else
    int32_t ecx_4 = *(arg2 + 0xec)
    int32_t result_6
    
    if (ecx_4 == 0)
        result_6 = result_3
    else
        int32_t eax_10 = *(arg2 + 0xf0)
        void* ebx_1
        
        if (eax_10 u> 4)
            ebx_1 = arg3
        else
            switch (eax_10)
                case 0
                    *(arg2 + 0x7c) = *(arg2 + 0xf8)
                    ebx_1 = arg3
                case 1
                    *(arg2 + 0x7c) = arg8
                    ebx_1 = arg3
                case 2
                    *(arg2 + 0x7c) = result_8
                    ebx_1 = arg3
                case 3
                    ebx_1 = arg3
                case 4
                    ebx_1 = arg3
                    *(arg2 + 0x7c) = *(ebx_1 + 0x44)
        
        int32_t eax_12 = *(arg2 + 0xf4)
        
        if (eax_12 u> 4)
            result_6 = result_3
        else
            switch (eax_12)
                case 0
                    *(arg2 + 0x80) = *(arg2 + 0xfc)
                    result_6 = result_3
                case 1
                    *(arg2 + 0x80) = arg9
                    result_6 = result_3
                case 2
                    result_6 = result_3
                    *(arg2 + 0x80) = result_6
                case 3
                    result_6 = result_3
                case 4
                    *(arg2 + 0x80) = *(ebx_1 + 0x48)
                    result_6 = result_3
    
    uint32_t var_24
    
    if (*(arg2 + 0xc0) != 0)
        int32_t result_9
        int32_t result_10
        
        if (ecx_4 != 0)
            result_9 = *(arg2 + 0x7c)
            result_10 = *(arg2 + 0x80)
        else
            result_9 = result_8
            result_10 = result_6
        
        if (*(arg2 + 0xe8) == 1)
            result_9 *= 2
            result_10 *= 2
        
        bool cond:1_1 = data_12dc610 != 0
        uint32_t edx = *(arg3 + 0x28)
        var_24 = edx
        
        if (not(cond:1_1) && data_1392700 != 0)
            edx = 0
            var_24 = 0
        else if (*(arg3 + 0x3c) != 0 && data_1313c7c == 0)
            edx = 0
            var_24 = 0
        
        if (result_9 s> 0 && *(arg2 + 0xd4) != 0)
            int32_t ebx_2 = *(arg2 + 0xd8)
            
            if (ebx_2 s> 0)
                uint32_t temp1_1 = modu.dp.d(0:(*(arg2 + 0x64) + edx), ebx_2)
                *(arg2 + 0x64) = temp1_1
                uint32_t eax_19 = divu.dp.d(0:(temp1_1 * result_9), ebx_2)
                
                if (*(arg2 + 0xd4) == 1)
                    eax_19 = neg.d(eax_19)
                
                if (*(arg2 + 0x74) != eax_19)
                    *(arg2 + 0x14c) += 1
                    *(arg2 + 0x74) = eax_19
        
        if (result_10 s> 0)
            int32_t ebx_3 = *(arg2 + 0xdc)
            
            if (ebx_3 != 0)
                int32_t ecx_5 = *(arg2 + 0xe0)
                
                if (ecx_5 s> 0)
                    uint32_t temp1_3 = modu.dp.d(0:(*(arg2 + 0x68) + var_24), ecx_5)
                    *(arg2 + 0x68) = temp1_3
                    uint32_t eax_23 = divu.dp.d(0:(temp1_3 * result_10), ecx_5)
                    
                    if (ebx_3 == 1)
                        eax_23 = neg.d(eax_23)
                    
                    if (*(arg2 + 0x78) != eax_23)
                        *(arg2 + 0x14c) += 1
                        *(arg2 + 0x78) = eax_23
    
    int32_t ecx_6
    int32_t edx_11
    
    if (*(arg2 + 0x100) != 0)
        edx_11 = *(arg3 + 0x28)
        
        if (data_12dc610 == 0 && data_1392700 != 0)
            edx_11 = 0
        else if (*(arg3 + 0x3c) != 0 && data_1313c7c == 0)
            edx_11 = 0
        
        ecx_6 = *(arg2 + 0x114)
    
    if (*(arg2 + 0x100) == 0 || ecx_6 s<= 0)
        ebx = 0
        edi_3 = 0
    else
        int32_t edi_2 = *(arg2 + 0x104)
        int32_t ebx_4 = *(arg2 + 0x10c)
        uint32_t temp1_5 = modu.dp.d(0:(*(arg2 + 0x84) + edx_11), ecx_6)
        bool cond:2_1 = *(arg2 + 0x11c) != 1
        int32_t edx_14 = *(arg2 + 0x108)
        var_24 = temp1_5
        *(arg2 + 0x84) = temp1_5
        int32_t eax_28 = *(arg2 + 0x110)
        int32_t var_1c_1 = edx_14
        int32_t var_20_1 = eax_28
        
        if (not(cond:2_1))
            edx_14 *= 2
            edi_2 *= 2
            ebx_4 *= 2
            var_1c_1 = edx_14
            eax_28 *= 2
            var_20_1 = eax_28
        
        int32_t ecx_8
        
        if (edi_2 s>= ebx_4)
            ecx_8 = edi_2 - ebx_4
        else
            ecx_8 = ebx_4 - edi_2
        
        int32_t eax_29
        
        if (edx_14 s>= eax_28)
            eax_29 = edx_14 - var_20_1
        else
            eax_29 = eax_28 - edx_14
        
        int32_t eax_31
        
        if (ecx_8 s<= eax_29)
            eax_31 = eax_29 * var_24
        else
            eax_31 = ecx_8 * var_24
        
        int32_t var_28
        sub_4d2390(&var_24, var_1c_1, edi_2, ebx_4, var_20_1, &var_24, &var_28, 
            divu.dp.d(0:eax_31, *(arg2 + 0x114)))
        edi_3 = var_24
        var_20 = edi_3
        
        if (*(arg2 + 0x88) != edi_3)
            *(arg2 + 0x14c) += 1
            *(arg2 + 0x88) = edi_3
        
        ebx = var_28
        var_1c = ebx
        
        if (*(arg2 + 0x8c) != ebx)
            *(arg2 + 0x14c) += 1
            *(arg2 + 0x8c) = ebx

if (*(arg4 + 0x18) == 2)
    int32_t eax_34 = 0
    uint32_t eax_35
    int32_t ecx_12
    
    if (*(arg2 + 0xc0) != 1)
        if (*(arg2 + 0x100) == 1 && *(arg2 + 0x11c) == 1)
            ecx_12 = ebx
            eax_35 = edi_3
            goto label_42fc29
    else if (*(arg2 + 0xe8) == 1)
        ecx_12 = *(arg2 + 0x78)
        eax_35 = *(arg2 + 0x74)
    label_42fc29:
        eax_34 = (eax_35 & 1) + ((ecx_12 & 1) << 1)
        
        if (eax_34 s< 0 || eax_34 s>= *(arg4 + 0x2c))
            eax_34 = 0
    
    if (*(arg2 + 0x14) != eax_34)
        *(arg2 + 0x14c) += 1
        *(arg2 + 0x14) = eax_34

int32_t ebx_5 = *(arg2 + 0xc0)
int32_t eax_37 = *(arg2 + 0x74)
int32_t ecx_14 = *(arg2 + 0x78)
*(arg2 + 0x6c) = eax_37
*(arg2 + 0x70) = ecx_14

if (ebx_5 != 0 && *(arg2 + 0xe8) == 1)
    *(arg2 + 0x6c) = eax_37 s>> 1
    *(arg2 + 0x70) = ecx_14 s>> 1

uint32_t edx_18 = var_20
int32_t ecx_16 = var_1c

if (*(arg2 + 0x100) != 0 && *(arg2 + 0x11c) == 1)
    edx_18 s>>= 1
    ecx_16 s>>= 1

int32_t edi_6 = *(arg2 + 0x100)
*(arg2 + 0x3c) = *(arg2 + 0xb0) + *(arg5 + 0xac) + edx_18 + arg6
*(arg2 + 0x40) = *(arg2 + 0xb4) + *(arg5 + 0xb0) + ecx_16 + arg7
int32_t eax_46
eax_46.b = *(arg2 + 0xb8)
*(arg2 + 0x144) = eax_46.b
ecx_16.b = *(arg5 + 0xb4)

if (ecx_16.b u< 0xff)
    *(arg2 + 0x144) = (zx.d(ecx_16.b) * zx.d(eax_46.b) s/ 0xff).b

int32_t result = result_1

if (result s> 0 && result_3 s> 0)
    int32_t edx_23 = 0
    int32_t ecx_19 = 0
    int32_t result_4
    int32_t edi_7
    
    if (ebx_5 == 0)
        edi_7 = 0
        
        if (*(arg2 + 0xec) != 0)
            result = *(arg2 + 0x80)
            result_4 = *(arg2 + 0x7c)
            result_2 = result
        else
            result_4 = result
            result = result_3
            result_2 = result
        
        goto label_42fdb4
    
    int32_t eax_52 = *(arg2 + 0xc4)
    int32_t ebx_6
    
    if (eax_52 u> 4)
        ebx_6 = 0
    else
        switch (eax_52)
            case 0
                result_5 = *(arg2 + 0xcc)
                ebx_6 = 0
            case 1
            label_42fd5c:
                result_5 = arg8
                ebx_6 = 0
            case 2
                result_5 = result_1
                ebx_6 = 0
            case 3
                if (edi_6 != 0)
                    goto label_42fd5c
                
                ebx_6 = 1
            case 4
                result_5 = *(arg3 + 0x44)
                ebx_6 = 0
    
    result = *(arg2 + 0xc8)
    
    if (result u> 4)
        edi_7 = 0
    else
        switch (result)
            case 0
                result = *(arg2 + 0xd0)
                result_2 = result
                edi_7 = 0
            case 1
            label_42fd96:
                result = arg9
                result_2 = result
                edi_7 = 0
            case 2
                result = result_3
                result_2 = result
                edi_7 = 0
            case 3
                if (edi_6 != 0)
                    goto label_42fd96
                
                edi_7 = 1
            case 4
                result = *(arg3 + 0x48)
                result_2 = result
                edi_7 = 0
    
    if (ebx_6 != 0)
        result = *(arg2 + 0x3c)
        
        if (result s< arg8)
            *(arg2 + 0x44) = result
            result = arg8 - 1
            *(arg2 + 0x4c) = result
            edx_23 = 1
    else
        result_4 = result_5
    label_42fdb4:
        
        if (result_4 s> 0)
            int32_t eax_56 = *(arg2 + 0x3c)
            *(arg2 + 0x44) = eax_56
            result = eax_56 - 1 + result_4
            *(arg2 + 0x4c) = result
            edx_23 = 1
    
    if (edi_7 != 0)
        result = *(arg2 + 0x40)
        
        if (result s< arg9)
            *(arg2 + 0x48) = result
            result = arg9 - 1
            *(arg2 + 0x50) = result
            ecx_19 = 1
    else if (result_2 s> 0)
        int32_t eax_58 = *(arg2 + 0x40)
        *(arg2 + 0x48) = eax_58
        result = eax_58 - 1 + result_2
        *(arg2 + 0x50) = result
        ecx_19 = 1
    
    if (edx_23 != 0 && ecx_19 != 0)
        if (*(arg2 + 0x120) == 0)
            *(arg2 + 0x134) = *(arg2 + 0x44)
            *(arg2 + 0x138) = *(arg2 + 0x48)
            *(arg2 + 0x13c) = *(arg2 + 0x4c)
            *(arg2 + 0x140) = *(arg2 + 0x50)
        else
            int32_t edi_9 = *(arg2 + 0x54)
            int32_t ebx_9 = *(arg2 + 0x5c)
            int32_t ecx_20 = *(arg2 + 0x58)
            int32_t edx_24 = *(arg2 + 0x60)
            
            if (edi_9 s> ebx_9)
                int32_t eax_60 = edi_9
                edi_9 = ebx_9
                ebx_9 = eax_60
            
            if (ecx_20 s> edx_24)
                int32_t eax_61 = ecx_20
                ecx_20 = edx_24
                edx_24 = eax_61
            
            if (edi_9 s< *(arg2 + 0x44))
                edi_9 = *(arg2 + 0x44)
            
            bool cond:3_1 = ecx_20 s< *(arg2 + 0x48)
            *(arg2 + 0x134) = edi_9
            
            if (cond:3_1)
                ecx_20 = *(arg2 + 0x48)
            
            bool cond:4_1 = ebx_9 s> *(arg2 + 0x4c)
            *(arg2 + 0x138) = ecx_20
            
            if (cond:4_1)
                ebx_9 = *(arg2 + 0x4c)
            
            bool cond:5_1 = edx_24 s> *(arg2 + 0x50)
            *(arg2 + 0x13c) = ebx_9
            
            if (cond:5_1)
                edx_24 = *(arg2 + 0x50)
            
            *(arg2 + 0x140) = edx_24
        
        result = *(arg2 + 0x134)
        
        if (result s<= *(arg2 + 0x13c))
            result = *(arg2 + 0x138)
            
            if (result s<= *(arg2 + 0x140))
                *(arg2 + 0x148) = 1
                return result
        
        *(arg2 + 0x134) = 0xffffffff
        *(arg2 + 0x138) = 0xffffffff
        *(arg2 + 0x13c) = 0xffffffff
        *(arg2 + 0x140) = 0xffffffff
    
    *(arg2 + 0x50) = 0xffffffff
    *(arg2 + 0x4c) = 0xffffffff
    *(arg2 + 0x48) = 0xffffffff
    *(arg2 + 0x44) = 0xffffffff

return result
