// 函数: sub_4ee260
// 地址: 0x4ee260
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edx

if (arg3 u<= 0x270f)
    edx = arg3 * 9

int32_t* eax_4

if (arg3 u> 0x270f || *((edx << 2) + &data_1b8c890) == 0 || arg2 s>= *((edx << 2) + &data_1b8c8a8))
    eax_4 = 2
else
    int32_t eax_1 = arg2 & 0x80000007
    
    if (eax_1 s< 0)
        eax_1 = ((eax_1 - 1) | 0xfffffff8) + 1
    
    eax_1.b = *((eax_1 << 2) + &data_611440)
    eax_4.b = (*((arg2 s>> 3) + *((edx << 2) + &data_1b8c894)) & eax_1.b) != 0

if (data_1af174c == 0)
    int32_t* eax_6 = eax_4
    
    if (eax_4 == 0)
        int32_t eax_10 = data_108f354
        
        if (eax_10 == 1)
        label_4ee415:
            
            if (arg4 == 0)
                int32_t eax_11 = data_1af17ac
                
                if (data_1af17b8 != 0)
                    eax_11 = 1
                
                data_1af17ac = eax_11
            
            data_1af17b8 = 0
        else if (eax_10 == 2 && data_13132e0 == 0)
            goto label_4ee415
        
        sub_494b00(arg3, arg2)
        eax_4 = arg3 * 9
        *((eax_4 << 2) + &data_1b8c8b0) += 1
        
        if (data_702fc0 != 0)
            eax_4 = sub_56f1b0(eax_4, arg2, arg3, arg4)
        
        data_703678 = 0
    else
        eax_4 = eax_6 - 1
        
        if (eax_6 == 1)
            int32_t ecx_4 = data_703678
            int32_t edx_4 = arg4
            
            if (ecx_4 != 2)
                ecx_4 = 1
            
            eax_4 = data_108f354
            data_703678 = ecx_4
            
            if (eax_4 == 1)
            label_4ee34d:
                eax_4.b = 0
                
                if (data_108f330 == 0x3e7)
                    edx_4 = arg4
                    eax_4 = zx.d(eax_4.b)
                    
                    if ((GetKeyState(0x91) & 1) == 0)
                        eax_4 = 1
                    
                    ecx_4 = data_703678
                
                if ((data_1af17b0 != 0 || eax_4.b != 0) && data_1af17b4 == 0 && data_703674 == 0
                        && data_7037c8 != 0)
                    if (edx_4 != 0)
                        eax_4 = data_1af17b8
                        
                        if (ecx_4 == 2)
                            eax_4 = 1
                        
                        data_1af17b8 = eax_4
                    else
                        data_1af17b8 = 1
            else if (eax_4 == 2 && data_13132e0 == 0)
                goto label_4ee34d
            
            if (data_702fc0 != 0)
                int32_t eax_9 = sub_56f330(eax_4, arg2, arg3, edx_4)
                data_1af17b4 = 0
                return eax_9
    
    data_1af17b4 = 0
else if (eax_4 == 0)
    sub_494b00(arg3, arg2)
    eax_4 = arg3 * 9
    *((eax_4 << 2) + &data_1b8c8b0) += 1
    
    if (data_702fc0 != 0)
        return sub_56f1b0(eax_4, arg2, arg3, arg4)

return eax_4
