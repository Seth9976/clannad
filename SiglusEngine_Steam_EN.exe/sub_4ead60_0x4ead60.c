// 函数: sub_4ead60
// 地址: 0x4ead60
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg1
int32_t* var_10 = ebx
void* edi = arg2[8]
uint32_t eax = zx.d(*(edi + 1))
uint32_t eax_3
uint32_t ecx
uint32_t edx
void* edi_1

if (arg2[4] != 1)
    ecx = zx.d(*(edi + 2))
    edx = zx.d(*(edi + 3))
    data_1b8ad74 = eax
    data_1b8c884 = sx.d(*(edi + 5))
    eax_3 = zx.d(*(edi + 7))
    edi_1 = edi + 8
else
    ecx = zx.d(*(edi + 4))
    edx = zx.d(*(edi + 5))
    data_1b8b074 = eax
    data_1b8ad74 = zx.d(*(edi + 3))
    data_1b8c884 = sx.d(*(edi + 7))
    eax_3 = zx.d(*(edi + 9))
    edi_1 = edi + 0xa

bool cond:1 = data_1b8ad74 != 0
data_1af4e84 = eax_3
data_1bfdd30 = edx
data_1b8b070 = ecx
char** result

if (cond:1)
    if (data_1b8ad74 != 1 || ecx != 0xa || edx != 0x64)
        goto label_4eb29b
    
    bool cond:2_1 = data_7035c8 == 0
    int32_t edi_3 = ebx[0x4ecf]
    ebx:1.b = 1
    data_1af1728 = 0
    
    if (cond:2_1 || data_976f94 == 0)
        ebx:1.b = 0
    else
        void* eax_23 = data_976f9c
        
        if (data_12a292c == 0)
            if (*(eax_23 + 0x1c4) != 1)
                ebx:1.b = 0
        else if (*(eax_23 + 0x1c4) == 2)
            ebx:1.b = 0
    
    sub_5800d0(edi_3)
    char var_11_1
    
    if (edi_3 u<= 0x3f && *(edi_3 * 0x3920 + &data_f8d2e0) != 0)
        var_11_1 = 1
    
    if (edi_3 u> 0x3f || *(edi_3 * 0x3920 + &data_f8d2e0) == 0 || data_187c51f != 0)
        var_11_1 = 0
    
    int32_t ecx_9
    ecx_9.b = 0
    sub_57fcf0(ecx_9, 1)
    void* eax_25 = &data_f8d300
    int32_t i_3 = 0x10
    int32_t i
    
    do
        if (*(eax_25 + 8) == 0 || *eax_25 != 0)
            *(eax_25 - 0x20) = 0
        
        if (*(eax_25 + 0x3928) == 0 || *(eax_25 + 0x3920) != 0)
            *(eax_25 + 0x3900) = 0
        
        if (*(eax_25 + 0x7248) == 0 || *(eax_25 + 0x7240) != 0)
            *(eax_25 + 0x7220) = 0
        
        if (*(eax_25 + 0xab68) == 0 || *(eax_25 + 0xab60) != 0)
            *(eax_25 + 0xab40) = 0
        
        eax_25 += 0xe480
        i = i_3
        i_3 -= 1
    while (i != 1)
    ebx.b = data_187c51f
    
    if (ebx.b == 0)
        sub_57d340()
    
    if (var_11_1 != 0 && edi_3 u<= 0x3f)
        bool cond:9_1 = *(edi_3 * 0x3920 + &data_f8d308) != 0
        *(edi_3 * 0x3920 + &data_f8d2e0) = 1
        
        if (not(cond:9_1))
            data_13701d8 = 0
            data_137010c = 1
        
        *(edi_3 * 0x3920 + &data_f8d308) = 1
    
    if (ebx:1.b == 0)
    label_4eb25a:
        
        if (edi_3 u<= 0x3f)
            *(edi_3 * 0x3920 + &data_f8d30c) = 1
    else
        int32_t eax_28 = sub_57fac0(0)
        
        if (eax_28 == 0)
            if (data_1311178 == eax_28 && data_13926a4 == eax_28 && data_13926a0 == eax_28
                    && data_702fe4 == eax_28 && data_702fd8 == eax_28 && data_702fcc == eax_28
                    && data_91e8fc s< 0x80 && sub_475310() == 0)
                var_10[2] = arg2[8] - arg2[6]
                sub_4977f0(4, nullptr)
                ebx.b = data_187c51f
            
            goto label_4eb25a
    
    if (ebx.b == 0)
        sub_57d490(edi_3)
    
label_4eb27a:
    result = sub_57ce10()
    
    if (result == 0)
        ebx = var_10
        goto label_4eb28f
else
    if (ecx == 1)
        arg2[8] = edi_1
        return sub_52a5c0(ebx, arg2)
    
    if (ecx != 2)
        if (ecx != 3 || edx - 0x11 u> 0xc1)
            goto label_4eb29b
        
        uint32_t eax_12 = zx.d(lookup_table_4eb88c[0xb + edx])
        
        switch (eax_12)
            case 0
                bool cond:4_1 = data_7035c8 == 0
                int32_t edi_2 = ebx[0x4ecf]
                ebx.b = 1
                data_1af1728 = 0
                
                if (cond:4_1 || data_976f94 == 0)
                    ebx.b = 0
                else
                    void* eax_13 = data_976f9c
                    
                    if (data_12a292c == 0)
                        if (*(eax_13 + 0x1c4) != 1)
                            ebx.b = 0
                    else if (*(eax_13 + 0x1c4) == 2)
                        ebx.b = 0
                
                sub_5800d0(edi_2)
                
                if (edi_2 u> 0x3f || *(edi_2 * 0x3920 + &data_f8d2e0) == 0 || data_187c51f != 0)
                    ebx:1.b = 0
                else
                    ebx:1.b = 1
                
                int32_t ecx_7
                ecx_7.b = 0
                sub_57fcf0(ecx_7, 1)
                void* eax_15 = &data_f8d300
                int32_t i_2 = 0x10
                int32_t i_1
                
                do
                    if (*(eax_15 + 8) == 0 || *eax_15 != 0)
                        *(eax_15 - 0x20) = 0
                    
                    if (*(eax_15 + 0x3928) == 0 || *(eax_15 + 0x3920) != 0)
                        *(eax_15 + 0x3900) = 0
                    
                    if (*(eax_15 + 0x7248) == 0 || *(eax_15 + 0x7240) != 0)
                        *(eax_15 + 0x7220) = 0
                    
                    if (*(eax_15 + 0xab68) == 0 || *(eax_15 + 0xab60) != 0)
                        *(eax_15 + 0xab40) = 0
                    
                    eax_15 += 0xe480
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)
                
                if (data_187c51f == i_2.b)
                    sub_57d340()
                
                if (ebx:1.b != 0 && edi_2 u<= 0x3f)
                    bool cond:10_1 = *(edi_2 * 0x3920 + &data_f8d308) != 0
                    *(edi_2 * 0x3920 + &data_f8d2e0) = 1
                    
                    if (not(cond:10_1))
                        data_13701d8 = 0
                        data_137010c = 1
                    
                    *(edi_2 * 0x3920 + &data_f8d308) = 1
                
                if (ebx.b == 0)
                label_4eb061:
                    
                    if (edi_2 u<= 0x3f)
                        *(edi_2 * 0x3920 + &data_f8d30c) = 1
                else
                    int32_t eax_18 = sub_57fac0(0)
                    
                    if (eax_18 == 0)
                        if (data_1311178 == eax_18 && data_13926a4 == eax_18
                                && data_13926a0 == eax_18 && data_702fe4 == eax_18
                                && data_702fd8 == eax_18 && data_702fcc == eax_18
                                && data_91e8fc s< 0x80 && sub_475310() == 0)
                            var_10[2] = arg2[8] - arg2[6]
                            sub_4977f0(5, nullptr)
                        
                        goto label_4eb061
                
                goto label_4eb27a
            case 1
                sub_4eaa70(eax_12, arg2, ebx, edi_1)
                result = sub_57ce10()
                
                if (result == 0)
                    goto label_4eb28f
            case 2
                goto label_4eb29b
    else
        if (edx u> 0xe)
            goto label_4eb29b
        
        uint32_t eax_6 = zx.d(lookup_table_4eb88c[edx])
        
        switch (eax_6)
            case 0
                edi_1 = sub_4ea3d0(eax_6, arg2, ebx, edi_1)
            label_4eb28f:
                ecx = data_1b8b070
                edx = data_1bfdd30
            label_4eb29b:
                int32_t result_1 = data_1b8ad74
                arg2[8] = edi_1
                result = result_1
                
                if (result_1 == 0)
                    if (ecx == 2)
                        return sub_527c40(ebx, arg2)
                    
                    if (ecx == 3)
                        return sub_52d870(ebx, arg2)
                    
                    if (ecx == 4)
                        return sub_52e1c0(ebx, arg2)
                    
                    data_1b8b06c = 1
                    return result
                
                void* eax_33 = result - 1
                
                if (result != 1)
                    result = eax_33 - 1
                    
                    if (eax_33 == 1)
                        if (ecx != 1)
                            result = ecx - 0x3c
                            
                            if (result u<= 4)
                                data_137010c = 1
                                
                                if (ecx == 0x3d)
                                    int32_t var_24_7 = 0
                                    return sub_513ef0(result, arg2, ecx - 0x3d)
                                
                                if (ecx == 0x3e)
                                    int32_t var_24_6 = 1
                                    return sub_513ef0(result, arg2, ecx - 0x3e)
                            else if (ecx - 0x47 u> 3)
                                result = ecx - 0x50
                                int32_t var_24_10
                                int32_t var_24_11
                                
                                if (result u> 7)
                                    ecx -= 0x58
                                    
                                    if (ecx u<= 6)
                                        data_137010c = 1
                                        
                                        switch (ecx)
                                            case 0, 3, 6
                                                var_24_11 = 1
                                                return sub_526020(result, arg2, ecx)
                                            case 1, 2, 4, 5
                                                var_24_10 = 0
                                                return sub_526020(result, arg2, ecx)
                                else
                                    data_137010c = 1
                                    
                                    switch (result)
                                        case nullptr, 1, 3, 4, 6, 7
                                            var_24_10 = 0
                                            return sub_526020(result, arg2, ecx)
                                        case 2, 5
                                            var_24_11 = 1
                                            return sub_526020(result, arg2, ecx)
                            else
                                data_137010c = 1
                                
                                switch (ecx)
                                    case 0x47
                                        int32_t var_24_8 = 0
                                        return sub_514660(ecx - 0x47, arg2, ecx)
                                    case 0x48
                                        int32_t var_24_9 = 1
                                        return sub_514660(ecx - 0x47, arg2, ecx)
                                    case 0x49
                                        return sub_5153a0(ecx - 0x47, arg2, ecx, 0)
                                    case 0x4a
                                        return sub_5153a0(ecx - 0x47, arg2, ecx, 1)
                        else if (edx == 0xc)
                            return sub_5424e0(arg2)
                    
                    data_1b8b06c = 1
                    return result
                
                result = ecx - 4
                
                if (result u> 0xa)
                    result = ecx - 0x14
                    
                    if (result u> 9)
                        result = ecx - 0x1e
                        
                        if (result u> 9)
                            result = ecx - 0x28
                            
                            if (result u<= 9)
                                data_137010c = 1
                                
                                if (ecx == 0x28)
                                    return sub_4fe380(ecx - 0x28, arg2)
                                
                                if (ecx == 0x29)
                                    return sub_4fc3a0(ecx - 0x29, arg2)
                            else if (ecx - 0x3c u<= 4)
                                data_137010c = 1
                                
                                switch (ecx)
                                    case 0x3c, 0x3d, 0x3f
                                        int32_t var_24_12 = 0
                                        return sub_4fec40(ecx - 0x3c, arg2, ecx)
                                    case 0x3e, 0x40
                                        int32_t var_24_13 = 1
                                        return sub_4fec40(ecx - 0x3c, arg2, ecx)
                            else if (ecx - 0x47 u> 3)
                                result = ecx - 0x50
                                int32_t var_24_16
                                int32_t var_24_17
                                
                                if (result u> 7)
                                    result = ecx - 0x58
                                    
                                    if (result u<= 6)
                                        data_137010c = 1
                                        
                                        switch (result)
                                            case nullptr, 3, 6
                                                var_24_17 = 1
                                                return sub_513cc0(result, arg2, ecx)
                                            case 1, 2, 4, 5
                                                var_24_16 = 0
                                                return sub_513cc0(result, arg2, ecx)
                                    else if (ecx == 0xff)
                                        return sub_541600(ecx, arg2)
                                else
                                    data_137010c = 1
                                    
                                    switch (result)
                                        case nullptr, 1, 3, 4, 6, 7
                                            var_24_16 = 0
                                            return sub_513cc0(result, arg2, ecx)
                                        case 2, 5
                                            var_24_17 = 1
                                            return sub_513cc0(result, arg2, ecx)
                            else
                                data_137010c = 1
                                
                                switch (ecx)
                                    case 0x47
                                        int32_t var_24_14 = 0
                                        return sub_4ffa50(ecx - 0x47, arg2, ecx)
                                    case 0x48
                                        int32_t var_24_15 = 1
                                        return sub_4ffa50(ecx - 0x47, arg2, ecx)
                                    case 0x49
                                        return sub_500c50(ecx - 0x47, arg2, ecx, 0)
                                    case 0x4a
                                        return sub_500c50(ecx - 0x47, arg2, ecx, 1)
                        else
                            data_137010c = 1
                            
                            switch (result)
                                case nullptr
                                    return sub_4fb9e0(ecx, arg2)
                                case 1
                                    return sub_4fc2f0()
                                case 3
                                    return sub_4f8090(ecx, arg2)
                                case 4
                                    return sub_4f9c40(ecx, arg2)
                    else
                        data_137010c = 1
                        
                        switch (result)
                            case nullptr
                                return sub_527fb0(ecx, arg2)
                            case 1
                                return sub_528fc0(ecx, arg2)
                            case 2
                                return sub_529b20(ecx, arg2)
                            case 3
                                return sub_529d00(ecx, arg2)
                            case 6
                                return sub_52a160(ecx, arg2)
                    
                    data_1b8b06c = 1
                    return result
                
                void var_14
                int32_t entry_ebx
                
                switch (result)
                    case nullptr
                        if (edx s< 0x3e8)
                            if (edx s< 0x1f4)
                                if (edx s< 0x64)
                                    return sub_530fd0(ecx, arg2)
                                
                                if (edx s< 0xc8)
                                    return sub_531060(ecx, arg2)
                                
                                if (edx s< 0x12c)
                                    return sub_5326f0(ecx, arg2)
                                
                                if (edx s>= 0x190)
                                    return sub_5332f0(ecx, arg2)
                                
                                return sub_532c30(ebx, arg2)
                            
                            if (edx s< 0x258)
                                return sub_534420(ecx, arg2)
                            
                            if (edx s< 0x2bc)
                                return sub_534e90(ecx, arg2)
                            
                            if (edx s< 0x320)
                                return sub_535670(ecx, arg2)
                            
                            if (edx s< 0x384)
                                return sub_537160()
                            
                            data_1b8b06c = 1
                            return result
                        
                        if (edx s< 0x7d0)
                            if (edx s< 0x5dc)
                                if (edx s< 0x44c)
                                    return sub_5371b0(ecx, arg2)
                                
                                if (edx s< 0x4b0)
                                    return sub_537a60(ecx, arg2)
                                
                                if (edx s< 0x514)
                                    return sub_537fd0(ecx.b, arg2)
                                
                                if (edx s>= 0x578)
                                    return sub_538c00(ecx, arg2)
                                
                                return sub_538430(ecx, arg2)
                            
                            if (edx s< 0x640)
                                return sub_5399a0(ecx, arg2)
                            
                            if (edx s< 0x6a4)
                                return sub_539e30(ecx, arg2)
                            
                            if (edx s< 0x708)
                                return sub_539fd0(ecx, arg2)
                            
                            if (edx s< 0x76c)
                                return sub_53a240(ecx, arg2)
                            
                            data_1b8b06c = 1
                            return result
                        
                        if (edx s< 0xbb8)
                            return sub_53ae30(ecx, arg2)
                        
                        if (edx s< 0xfa0)
                            return sub_53d1c0(ebx, arg2)
                    case 1
                        return sub_53df70(arg2)
                    case 2, 3, 4, 5
                        data_1b8b06c = 1
                    case 6
                        return sub_53e6b0(ecx, arg2)
                    case 7
                        return sub_53fc00(arg4, arg3, entry_ebx, var_14)
                    case 8
                        return sub_4faf80(ecx, arg2)
                    case 9
                        return sub_4fb620(ecx, arg2)
                    case 0xa
                        return sub_4fb730(ecx, arg2)
            case 1
                edi_1 = sub_4ea500(eax_6, arg2, ebx, edi_1)
                goto label_4eb28f
            case 2
                edi_1 = sub_4ea630(eax_6, arg2, ebx, edi_1)
                goto label_4eb28f
            case 3
                edi_1 = sub_4ea810(eax_6, arg2, ebx, edi_1)
                goto label_4eb28f
            case 4
                goto label_4eb29b

return result
