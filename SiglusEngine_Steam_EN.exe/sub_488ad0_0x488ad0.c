// 函数: sub_488ad0
// 地址: 0x488ad0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

uint32_t eax = arg6

if (eax u<= 0x63)
    eax = zx.d(lookup_table_4890d4[eax])
    
    switch (eax)
        case 0
            data_702fe8 = data_976f74
            data_702fec = data_976f78
            eax = data_976f7c
            data_702ff0 = eax
        case 1
            data_702fe8 = data_976e94
            data_702fec = data_976e98
            eax = data_976e9c
            data_702ff0 = eax
        case 2
            data_702fe8 = data_976eb4
            data_702fec = data_976eb8
            eax = data_976ebc
            data_702ff0 = eax
        case 3
            data_702fe8 = data_1ff4cb8
            data_702fec = data_1ff4cbc
            eax = data_1ff4cc0
            data_702ff0 = eax

int32_t* ecx = arg4
int32_t* esi
void* edi

if (ecx u> 4)
    edi = arg4
    esi = arg4
else
    switch (ecx)
        case nullptr
            esi = arg5
            edi = 0xffffffff
            arg6.b = 0
        case 1, 4
            edi = 0xffffffff
            arg6.b = 0
            esi = 0xb
        case 2, 3
            esi = 0xb
            edi = arg5 + 1
            arg6.b = 1

int32_t var_10_1

if (data_7030d0 != 0)
    var_10_1 = 1

if (data_7030d0 == 0 || arg3 != 0)
    var_10_1 = 0

if (arg10 == 1)
    eax = sub_42d270(arg2)
    ecx = arg4

if (ecx != 4 && ecx != 3)
    eax = sub_46f660(eax, edi, arg2, esi, arg6.b)

if (data_702fc0 != 0)
    eax = data_703008
    
    if (data_1b14a24 != 0)
        eax = 1
    
    data_703008 = eax

data_1b14a24 = 0

if (arg8 == 2)
    sub_41cd30(eax, 0x1356f98, 0x1356f0c, nullptr, nullptr)
    sub_431a00()
    data_1374350 = 0
    int32_t* eax_9 = sub_579480()
    
    if (data_13740b0 != 0)
        sub_41cd30(eax_9, 0x13742c4, 0x1374238, &data_1374350, 0x1374554)
    
    sub_415ad0()
    sub_4a75b0()
    sub_461430()
    eax = sub_420f30()
    
    if (data_702fc0 != 0 && data_1af414c != 0 && data_131905c != 0)
        eax = sub_45fc30()

if (arg9 != 2)
    if (data_703008 != 0)
        int32_t edx_4 = data_1b8c88c * data_1be46d0
        int32_t ecx_3 = data_1be46dc
        data_1be46d4 = 0
        eax = sub_4d1ba0(eax, edx_4, ecx_3, 1)
    
    if (arg9 == 1)
        int32_t var_30_3 = data_7030b8
        sub_494d60(eax, data_7030b0, data_7030ac, data_7030b4)
    
    sub_494f60()
else
    sub_4d9090(eax, data_7030ac, &data_1b8ad60, data_7030b0, data_7030b4, data_7030b8)

if (data_1b8ad60 != 0)
    int32_t* ecx_5 = data_1b8ad64
    int32_t* var_18_1 = ecx_5
    int32_t i_1 = 0
    
    if (data_1b8ad6c s> 0)
        int32_t esi_2 = arg7
        
        if (esi_2 s<= 5)
            esi_2 = 5
        
        arg9 = esi_2
        int32_t i
        
        do
            data_702ff4 = *ecx_5
            data_702ff8 = ecx_5[1]
            data_702ffc = ecx_5[2]
            data_703000 = ecx_5[3]
            int32_t eax_14
            int32_t ecx_7
            
            if (var_10_1 != 0)
                eax_14, ecx_7 = sub_413ef0(arg3)
            else if ((&data_8c4ca4)[arg2 * 0x22] != 0)
                eax_14, ecx_7 = sub_42d2f0(arg2)
            else
                eax_14, ecx_7 = sub_413ef0(arg3)
            
            if (arg4 == 4)
                eax_14 = arg7 + 1
                
                if (eax_14 u<= 0xc)
                    eax_14 = sub_4b58e0()
            else
                int32_t esi_3 = 0xffffffff
                
                if (arg9 s>= 0xffffffff)
                    do
                        if (arg7 == esi_3)
                            eax_14 = sub_4b58e0()
                        
                        eax_14 = sub_4705b0(eax_14, esi_3, arg2, edi, esi, arg6.b, arg13)
                        esi_3 += 1
                    while (esi_3 s<= arg9)
                
                esi_2 = arg9
            
            if (arg8 != 0)
                sub_41ecb0()
                eax_14 = sub_57b260()
            
            int32_t* esi_4
            
            if (arg4 == 4)
                esi_4 = esi
            else
                esi_4 = esi
                
                if (esi_2 s< 8)
                    eax_14 = sub_4705b0(eax_14, 8, arg2, edi, esi_4, arg6.b, arg13)
            
            if (arg8 != 0)
                eax_14 = sub_57b340()
            
            if (arg4 != 4 && arg9 s< 9)
                eax_14 = sub_4705b0(eax_14, 9, arg2, edi, esi_4, arg6.b, arg13)
            
            if (arg8 != 0)
                eax_14 = sub_415e00()
            
            if (arg4 != 4 && arg9 s< 0xa)
                eax_14 = sub_4705b0(eax_14, 0xa, arg2, edi, esi_4, arg6.b, arg13)
            
            if (arg8 != 0 && arg11 != 0)
                eax_14 = sub_4a79d0()
            
            if (arg4 != 4 && arg9 s< 0xb)
                sub_4705b0(eax_14, 0xb, arg2, edi, esi_4, arg6.b, arg13)
            
            if (arg8 != 0)
                if (arg12 != 0)
                    sub_431a80()
                
                sub_45fdc0()
                sub_461570()
                sub_420ff0()
                
                if (data_702fc0 != 0 && data_1af414c != 0 && data_131905c != 0)
                    void* eax_17 = data_1af08c0
                    sub_424660(eax_17, &data_1af08c4, eax_17 * 0x1c + &data_1af4770, 1, 0xffffffff, 
                        0, 0)
            
            i = i_1 + 1
            esi_2 = arg9
            ecx_5 = &var_18_1[4]
            var_18_1 = ecx_5
            i_1 = i
        while (i s< data_1b8ad6c)

if (arg10 == 1 && arg2 u<= 1)
    int32_t eax_18 = (&data_ef08e8)[arg2 * 0x60]
    
    if (eax_18 == 1)
        __builtin_memcpy(arg2 * 0x180 + 0xef09dc, arg2 * 0x180 + 0xef0950, 0x8c)
        (&data_ef09b4)[arg2 * 0x60] = 0xffffffff
        (&data_ef09b8)[arg2 * 0x60] = 0xffffffff
        (&data_ef09bc)[arg2 * 0x60] = 0xffffffff
        (&data_ef09c0)[arg2 * 0x60] = 0xffffffff
    else if (eax_18 == 2)
        sub_4301e0(&(&data_ef08f8)[arg2 * 0x60])

int32_t* result = arg4

if (result != 4 && result != 2)
    result = sub_46f8f0(result, edi, arg2, esi, arg6.b)

if (arg8 == 2)
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
