// 函数: sub_48a8c0
// 地址: 0x48a8c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = 0

if (arg5 != 0)
    ebx = 2

int32_t* result
result.b = arg6 != 0
arg6.d = result

if (data_1332b60 s> 0 && data_1332b64 s> 0 && arg3 != 0)
    data_1ff4cb8 = arg3
    data_702fe8 = arg3
    data_703008 = 1
    data_1ff4cbc = arg2
    data_1ff4cc0 = arg4
    data_702fec = arg2
    data_702ff0 = arg4
    int32_t* eax_2 = sub_46f660(sub_42d270(0), 0xffffffff, 0, 0xb, 0)
    
    if (data_702fc0 != 0)
        eax_2 = data_703008
        
        if (data_1b14a24 != 0)
            eax_2 = 1
        
        data_703008 = eax_2
    
    data_1b14a24 = 0
    
    if (ebx == 2)
        sub_41cd30(eax_2, 0x1356f98, 0x1356f0c, nullptr, nullptr)
        sub_431a00()
        data_1374350 = 0
        int32_t* eax_3 = sub_579480()
        
        if (data_13740b0 != 0)
            sub_41cd30(eax_3, 0x13742c4, 0x1374238, &data_1374350, 0x1374554)
        
        sub_415ad0()
        sub_4a75b0()
        sub_461430()
        eax_2 = sub_420f30()
        
        if (data_702fc0 != 0 && data_1af414c != 0 && data_131905c != 0)
            eax_2 = sub_45fc30()
    
    if (data_703008 != 0)
        int32_t edx_1 = data_1b8c88c * data_1be46d0
        int32_t ecx = data_1be46dc
        data_1be46d4 = 0
        sub_4d1ba0(eax_2, edx_1, ecx, 1)
    
    sub_494f60()
    
    if (data_1b8ad60 != 0)
        int32_t* edi_1 = data_1b8ad64
        arg5.d = 0
        
        if (data_1b8ad6c s> 0)
            int32_t i
            
            do
                bool cond:4_1 = data_8c4ca4 != 0
                data_702ff4 = *edi_1
                data_702ff8 = edi_1[1]
                data_702ffc = edi_1[2]
                data_703000 = edi_1[3]
                int32_t eax_8
                
                if (cond:4_1)
                    eax_8 = sub_42d2f0(0)
                else
                    eax_8 = sub_413ef0(4)
                
                for (int32_t j = 0xffffffff; j s<= 5; j += 1)
                    if (j == 0xfffffc18)
                        eax_8 = sub_4b58e0()
                    
                    eax_8 = sub_4705b0(eax_8, j, 0, 0xffffffff, 0xb, 0, 0)
                
                if (ebx != 0)
                    sub_41ecb0()
                    eax_8 = sub_57b260()
                
                void* eax_9 = sub_4705b0(eax_8, 8, 0, 0xffffffff, 0xb, 0, 0)
                
                if (ebx != 0)
                    eax_9 = sub_57b340()
                
                void* eax_10 = sub_4705b0(eax_9, 9, 0, 0xffffffff, 0xb, 0, 0)
                
                if (ebx != 0)
                    eax_10 = sub_415e00()
                
                void* eax_11 = sub_4705b0(eax_10, 0xa, 0, 0xffffffff, 0xb, 0, 0)
                
                if (ebx != 0 && arg6.d != 0)
                    eax_11 = sub_4a79d0()
                
                sub_4705b0(eax_11, 0xb, 0, 0xffffffff, 0xb, 0, 0)
                
                if (ebx != 0)
                    sub_45fdc0()
                    sub_461570()
                    sub_420ff0()
                    
                    if (data_702fc0 != 0 && data_1af414c != 0 && data_131905c != 0)
                        void* eax_12 = data_1af08c0
                        sub_424660(eax_12, &data_1af08c4, eax_12 * 0x1c + &data_1af4770, 1, 
                            0xffffffff, 0, 0)
                
                edi_1 = &edi_1[4]
                i = arg5.d + 1
                arg5.d = i
            while (i s< data_1b8ad6c)
    
    int32_t eax_13 = data_ef08e8
    int32_t eax_14 = eax_13 - 1
    
    if (eax_13 == 1)
        __builtin_memcpy(0xef09dc, 0xef0950, 0x8c)
        data_ef09b4 = 0xffffffff
        data_ef09b8 = 0xffffffff
        data_ef09bc = 0xffffffff
        data_ef09c0 = 0xffffffff
    else
        int32_t temp1_1 = eax_14
        eax_14 -= 1
        
        if (temp1_1 == 1)
            eax_14 = sub_4301e0(&data_ef08f8)
    
    result = sub_46f8f0(eax_14, 0xffffffff, 0, 0xb, 0)
    
    if (ebx == 2)
        int128_t xmm0_1 = data_624a60
        __builtin_memcpy(0x1356f98, 0x1356f0c, 0x8c)
        data_1356f70.o = xmm0_1
        sub_431af0()
        
        if (data_13740b0 != 0)
            sub_41d040(result, 0x1374238, 0x13742c4, 0x1374554, &data_1374350)
        
        sub_5794f0()
        sub_415d40()
        result = sub_4a7b50()
        
        if (data_1b144b0 != 0 && data_1b144c8 != 0)
            result = sub_41d040(result, 0x1b144f4, 0x1b14580, 0x1b14810, &data_1b1460c)
        
        sub_421640()
        
        if (data_702fc0 != 0 && data_1af414c != 0 && data_131905c != 0)
            __builtin_memcpy(0x1af0950, &data_1af08c4, 0x8c)
            data_1af0928 = 0xffffffff
            data_1af092c = 0xffffffff
            data_1af0930 = 0xffffffff
            data_1af0934 = 0xffffffff

return result
