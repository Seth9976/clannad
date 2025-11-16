// 函数: sub_489150
// 地址: 0x489150
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_10 = 0
int32_t eax

if (data_702fc0 != 0 && data_1af414c != 0 && data_131905c != 0)
    eax = sub_45fbc0()
    var_10 = 1

int32_t ecx

if (data_703600 u> 0)
    int32_t var_38_1 = ecx
    eax, ecx = sub_4d8120(&data_7035d8, 0x7035fc)

if (data_703618 u> 0)
    int32_t var_38_2 = ecx
    sub_4d8190(eax, &data_7035f0, &data_7035e4, 0x703614)

sub_4929f0()
sub_493e60()
sub_41eb10()
sub_4a7050()
sub_57e3c0()
sub_417760()

if (data_107eea4 != 0)
    sub_4d20b0(&data_107ef70)
    data_107ee58 = data_107ef74

if (data_107eff4 != 0)
    sub_4d20b0(&data_107f0c0)
    data_107efa8 = data_107f0c4

sub_474bf0(0)
sub_474bf0(1)

if (data_702fc0 != 0)
    sub_56d950()

sub_431120()
sub_42d490(0, 1)
int32_t edx

if (data_7030cc != 2)
    edx = 1
else
    sub_430020(&data_ef0a78, &data_ef08f8)
    edx = 0

sub_42d490(1, edx)
sub_42d090(0)
sub_42d090(1)
sub_4bacc0()
int32_t edi = data_71929c
int32_t esi = 0

if (edi == 0x1f || edi == 0x1d)
    int32_t eax_3
    eax_3.b = data_7030d0 != 0
    int32_t var_18_1 = eax_3 + 1
    esi = eax_3 + 1

char var_5 = 0

if (edi == 0x22 || edi == 0x23 || edi == 0x24)
    var_5 = 1

char eax_5 = sub_45fd20()
int32_t ecx_1

if (data_7035d0 == 1 || data_976b50 == 0 || esi != 0 || data_1313244 != esi || data_703020 != esi
    || data_703024 != esi)
label_4893ba:
    data_1af0f34 = 1
    ecx_1 = data_1af4144
    data_1b1bcc8 = 0
else
    if (sub_57fb70() != 0)
        goto label_4893ba
    
    if (sub_475260() != 0)
        goto label_4893ba
    
    for (void* i = &data_139291c; i s< 0x1392eac; i += 0x2c8)
        if (*(i - 0x1fc) s>= 0 && *i == 1)
            goto label_4893ba
    
    if (data_1372da4 != 0 || data_8c4ca4 != 0 || data_8c4d2c != 0 || data_131d2d0 != 0xffffffff
            || data_139270c != 0xffffffff || var_10 != 0 || data_1356ed8 != 0 || var_5 != 0
            || eax_5 != 0 || edi == 0x2d)
        goto label_4893ba
    
    int32_t eax_8 = data_1af0f34
    
    if (eax_8 s> 0)
        data_1af0f34 = eax_8 - 1
        ecx_1 = data_1af4144
        data_1b1bcc8 = 0
    else
        ecx_1 = data_976b54
        data_1b1bcc8 = 1

bool cond:22 = data_1af0f38 != ecx_1
data_976f78 = data_1332b60
data_976f7c = data_1332b64
int32_t* result = data_703008

if (cond:22)
    result = 1

data_1b8ad70 = ecx_1
data_1332b54 = ecx_1
data_976f74 = ecx_1
data_703008 = result

if (esi != 0)
    sub_4b6000()
label_489433:
    sub_4d6c40(&data_1b8ad60, &data_1b8ad64)
    data_1b8ad60.o = zx.o(0)
    int32_t ecx_2 = sub_57e1f0()
    int128_t var_28
    
    if (esi == 1)
        int32_t eax_12 = data_1af4144
        int32_t edi_1 = data_7030c8
        data_1b8ad70 = eax_12
        data_1332b54 = eax_12
        data_976f74 = eax_12
        data_976f78 = data_1332b60
        int32_t eax_14 = data_1332b64
        int32_t var_38_3 = ecx_2
        data_1b1bcc8 = 2
        data_976f7c = eax_14
        int32_t var_c_1 = edi_1
        sub_49bf30(esi, esi)
        data_702fe8 = data_976eb4
        data_702fec = data_976eb8
        data_702ff0 = data_976ebc
        sub_46f660(sub_42d270(esi), 0xffffffff, esi, edi_1, 0)
        int32_t eax_19 = data_703008
        
        if (data_702fc0 != 0)
            if (data_1b14a24 != 0)
                eax_19 = esi
            
            data_703008 = eax_19
        
        data_1b14a24 = 0
        
        if (eax_19 != 0)
            int32_t edx_3 = data_1b8c88c * data_1be46d0
            int32_t ecx_6 = data_1be46dc
            data_1be46d4 = 0
            sub_4d1ba0(eax_19, edx_3, ecx_6, 1)
        
        sub_494f60()
        
        if (data_1b8ad60 != 0)
            int32_t* ecx_7 = data_1b8ad64
            int32_t* var_10_1 = ecx_7
            int32_t var_14_1 = 0
            
            if (data_1b8ad6c s> 0)
                while (true)
                    bool cond:3_1 = data_8c4d2c != 0
                    data_702ff4 = *ecx_7
                    data_702ff8 = ecx_7[1]
                    data_702ffc = ecx_7[2]
                    data_703000 = ecx_7[3]
                    int32_t eax_24
                    
                    if (cond:3_1)
                        eax_24 = sub_42d2f0(esi)
                    else
                        eax_24 = sub_413ef0(esi)
                    
                    for (int32_t i_1 = 0xffffffff; i_1 s<= 5; i_1 += 1)
                        if (i_1 == 0xfffffc18)
                            eax_24 = sub_4b58e0()
                        
                        eax_24 = sub_4705b0(eax_24, i_1, 1, 0xffffffff, edi_1, 0, 1)
                    
                    int32_t edx_5 = data_702fc0
                    int32_t eax_25 = data_1313248
                    
                    if (edx_5 == 0)
                    label_4895d3:
                        int32_t ecx_13 = data_1b14e58
                        
                        if (ecx_13 s> 0)
                            int32_t esi_1 = 0
                            
                            if (ecx_13 s> 0)
                                do
                                    int32_t ecx_14 = *((esi_1 << 2) + &data_1b15c90)
                                    int32_t eax_26 = ecx_14 * 9
                                    
                                    if (*((eax_26 << 2) + &data_12b926c) == 8)
                                        int32_t var_38_4 = ecx_14 * 0xf40 + 0x98c6a4
                                        sub_4704d0(ecx_14 * 0xf40 + 0x98c6a4, 
                                            ecx_14 * 0xca0 + 0x72dd00, 
                                            (eax_26 << 2) + &data_12b9268)
                                    
                                    esi_1 += 1
                                while (esi_1 s< ecx_13)
                                
                                edx_5 = data_702fc0
                                eax_25 = data_1313248
                    else if (eax_25 != 1 && (eax_25 == 2 || eax_25 != 3))
                        goto label_4895d3
                    
                    if (edx_5 == 0)
                    label_489643:
                        int32_t ecx_20 = data_1b14e58
                        
                        if (ecx_20 s> 0)
                            int32_t esi_2 = 0
                            
                            if (ecx_20 s> 0)
                                do
                                    int32_t ecx_21 = *((esi_2 << 2) + &data_1b15c90)
                                    int32_t eax_29 = ecx_21 * 9
                                    
                                    if (*((eax_29 << 2) + &data_12b926c) == 9)
                                        int32_t var_38_5 = ecx_21 * 0xf40 + 0x98c6a4
                                        sub_4704d0(ecx_21 * 0xf40 + 0x98c6a4, 
                                            ecx_21 * 0xca0 + 0x72dd00, 
                                            (eax_29 << 2) + &data_12b9268)
                                    
                                    esi_2 += 1
                                while (esi_2 s< ecx_20)
                                
                                edx_5 = data_702fc0
                                eax_25 = data_1313248
                    else if (eax_25 != 1 && (eax_25 == 2 || eax_25 != 3))
                        goto label_489643
                    
                    if (edx_5 == 0)
                    label_4896b3:
                        int32_t ecx_27 = data_1b14e58
                        
                        if (ecx_27 s> 0)
                            int32_t esi_3 = 0
                            
                            if (ecx_27 s> 0)
                                do
                                    int32_t ecx_28 = *((esi_3 << 2) + &data_1b15c90)
                                    int32_t eax_32 = ecx_28 * 9
                                    
                                    if (*((eax_32 << 2) + &data_12b926c) == 0xa)
                                        int32_t var_38_6 = ecx_28 * 0xf40 + 0x98c6a4
                                        sub_4704d0(ecx_28 * 0xf40 + 0x98c6a4, 
                                            ecx_28 * 0xca0 + 0x72dd00, 
                                            (eax_32 << 2) + &data_12b9268)
                                    
                                    esi_3 += 1
                                while (esi_3 s< ecx_27)
                                
                                edx_5 = data_702fc0
                                eax_25 = data_1313248
                    else if (eax_25 != 1 && (eax_25 == 2 || eax_25 != 3))
                        goto label_4896b3
                    
                    if (edx_5 == 0)
                    label_489721:
                        int32_t eax_38 = data_1b14e58
                        
                        if (eax_38 s> 0)
                            int32_t esi_4 = 0
                            
                            if (eax_38 s> 0)
                                do
                                    int32_t ecx_30 = *((esi_4 << 2) + &data_1b15c90)
                                    int32_t eax_39 = ecx_30 * 9
                                    
                                    if (*((eax_39 << 2) + &data_12b926c) == 0xb)
                                        int32_t var_38_7 = ecx_30 * 0xf40 + 0x98c6a4
                                        sub_4704d0(ecx_30 * 0xf40 + 0x98c6a4, 
                                            ecx_30 * 0xca0 + 0x72dd00, 
                                            (eax_39 << 2) + &data_12b9268)
                                    
                                    esi_4 += 1
                                while (esi_4 s< eax_38)
                    else if (eax_25 != 1 && (eax_25 == 2 || eax_25 != 3))
                        goto label_489721
                    
                    int32_t edx_15 = var_14_1 + 1
                    edi_1 = var_c_1
                    ecx_7 = &var_10_1[4]
                    var_10_1 = ecx_7
                    var_14_1 = edx_15
                    
                    if (edx_15 s>= data_1b8ad6c)
                        break
                    
                    esi = 1
        
        int32_t eax_42 = data_ef0a68
        int32_t eax_43 = eax_42 - 1
        
        if (eax_42 == 1)
            __builtin_memcpy(0xef0b5c, 0xef0ad0, 0x8c)
            data_ef0b34 = 0xffffffff
            data_ef0b38 = 0xffffffff
            data_ef0b3c = 0xffffffff
            data_ef0b40 = 0xffffffff
        else
            int32_t temp1_1 = eax_43
            eax_43 -= 1
            
            if (temp1_1 == 1)
                eax_43 = sub_4301e0(&data_ef0a78)
        
        sub_46f8f0(eax_43, 0xffffffff, 1, var_c_1, 0)
        sub_4d6c40(&data_1b8ad60, &data_1b8ad64)
        data_1b8ad60.o = zx.o(0)
        sub_49bf30(0, 0)
        data_702fe8 = data_976e94
        data_702fec = data_976e98
        data_702ff0 = data_976e9c
        int32_t eax_47
        eax_47.b = data_7030d0 != 0
        sub_46f660(sub_42d270(0), 0xffffffff, 0, var_c_1, 0)
        int32_t eax_49 = data_703008
        
        if (data_702fc0 != 0)
            if (data_1b14a24 != 0)
                eax_49 = 1
            
            data_703008 = eax_49
        
        data_1b14a24 = 0
        
        if (eax_49 != 0)
            int32_t edx_17 = data_1b8c88c * data_1be46d0
            int32_t ecx_33 = data_1be46dc
            data_1be46d4 = 0
            sub_4d1ba0(eax_49, edx_17, ecx_33, 1)
        
        sub_494f60()
        
        if (data_1b8ad60 != 0)
            int32_t* edi_6 = data_1b8ad64
            int32_t* var_14_2 = edi_6
            int32_t i_11 = 0
            
            if (data_1b8ad6c s> 0)
                int32_t i_2
                
                do
                    data_702ff4 = *edi_6
                    data_702ff8 = edi_6[1]
                    data_702ffc = edi_6[2]
                    data_703000 = edi_6[3]
                    int32_t eax_54
                    
                    if (eax_47 != 0)
                        eax_54 = sub_413ef0(0)
                    else if (data_8c4ca4 != 0)
                        eax_54 = sub_42d2f0(0)
                    else
                        eax_54 = sub_413ef0(0)
                    
                    for (int32_t j = 0xffffffff; j s<= 5; j += 1)
                        if (j == 0xfffffc18)
                            eax_54 = sub_4b58e0()
                        
                        eax_54 = sub_4705b0(eax_54, j, 0, 0xffffffff, var_c_1, 0, 1)
                    
                    sub_4705b0(
                        sub_4705b0(
                            sub_4705b0(sub_4705b0(eax_54, 8, 0, 0xffffffff, var_c_1, 0, 1), 9, 0, 
                                0xffffffff, var_c_1, 0, 1), 
                            0xa, 0, 0xffffffff, var_c_1, 0, 1), 
                        0xb, 0, 0xffffffff, var_c_1, 0, 1)
                    i_2 = i_11 + 1
                    edi_6 = &var_14_2[4]
                    i_11 = i_2
                    var_14_2 = edi_6
                while (i_2 s< data_1b8ad6c)
        
        int32_t eax_58 = data_ef08e8
        int32_t eax_59 = eax_58 - 1
        
        if (eax_58 == 1)
            __builtin_memcpy(0xef09dc, 0xef0950, 0x8c)
            data_ef09b4 = 0xffffffff
            data_ef09b8 = 0xffffffff
            data_ef09bc = 0xffffffff
            data_ef09c0 = 0xffffffff
        else
            int32_t temp5_1 = eax_59
            eax_59 -= 1
            
            if (temp5_1 == 1)
                eax_59 = sub_4301e0(&data_ef08f8)
        
        sub_46f8f0(eax_59, 0xffffffff, 0, var_c_1, 0)
        sub_494e30(&data_1b8ad60)
        sub_4d6c40(&data_1b8ad60, &data_1b8ad64)
        int32_t edi_9 = var_c_1 + 1
        data_702fe8 = data_976f74
        data_702fec = data_976f78
        int32_t eax_62 = data_976f7c
        data_1b8ad60.o = zx.o(0)
        data_702ff0 = eax_62
        int32_t* eax_63 = sub_46f660(eax_62, edi_9, 0, 0xb, 1)
        
        if (data_702fc0 != 0)
            eax_63 = data_703008
            
            if (data_1b14a24 != 0)
                eax_63 = 1
            
            data_703008 = eax_63
        
        data_1b14a24 = 0
        sub_41cd30(eax_63, 0x1356f98, 0x1356f0c, nullptr, nullptr)
        sub_431a00()
        data_1374350 = 0
        int32_t* eax_64 = sub_579480()
        
        if (data_13740b0 != 0)
            sub_41cd30(eax_64, 0x13742c4, 0x1374238, &data_1374350, 0x1374554)
        
        sub_415ad0()
        sub_4a75b0()
        sub_461430()
        int32_t eax_65 = sub_420f30()
        
        if (data_702fc0 != 0 && data_1af414c != 0 && data_131905c != 0)
            eax_65 = sub_45fc30()
        
        if (data_703008 != 0)
            int32_t edx_21 = data_1b8c88c * data_1be46d0
            int32_t ecx_35 = data_1be46dc
            data_1be46d4 = 0
            eax_65 = sub_4d1ba0(eax_65, edx_21, ecx_35, 1)
        
        int32_t var_38_8 = data_7030b8
        sub_494d60(eax_65, data_7030b0, data_7030ac, data_7030b4)
        int32_t* eax_66 = sub_494f60()
        
        if (data_1b8ad60 != 0)
            int32_t* ecx_37 = data_1b8ad64
            int32_t* var_14_3 = ecx_37
            int32_t i_8 = 0
            
            if (data_1b8ad6c s> 0)
                int32_t i_3
                
                do
                    bool cond:21_1 = data_8c4ca4 != 0
                    data_702ff4 = *ecx_37
                    data_702ff8 = ecx_37[1]
                    data_702ffc = ecx_37[2]
                    data_703000 = ecx_37[3]
                    int32_t eax_71
                    
                    if (cond:21_1)
                        eax_71 = sub_42d2f0(0)
                    else
                        eax_71 = sub_413ef0(2)
                    
                    for (int32_t j_1 = 0xffffffff; j_1 s<= 5; j_1 += 1)
                        if (j_1 == 0xfffffc18)
                            eax_71 = sub_4b58e0()
                        
                        eax_71 = sub_4705b0(eax_71, j_1, 0, edi_9, 0xb, 1, 1)
                    
                    sub_41ecb0()
                    sub_4705b0(sub_57b260(), 8, 0, edi_9, 0xb, 1, 1)
                    sub_4705b0(sub_57b340(), 9, 0, edi_9, 0xb, 1, 1)
                    sub_4705b0(sub_415e00(), 0xa, 0, edi_9, 0xb, 1, 1)
                    sub_4705b0(sub_4a79d0(), 0xb, 0, edi_9, 0xb, 1, 1)
                    sub_431a80()
                    sub_45fdc0()
                    sub_461570()
                    eax_66 = sub_420ff0()
                    
                    if (data_702fc0 != 0 && data_1af414c != 0 && data_131905c != 0)
                        void* eax_76 = data_1af08c0
                        eax_66 = sub_424660(eax_76, &data_1af08c4, eax_76 * 0x1c + &data_1af4770, 
                            1, 0xffffffff, 0, 0)
                    
                    i_3 = i_8 + 1
                    ecx_37 = &var_14_3[4]
                    i_8 = i_3
                    var_14_3 = ecx_37
                while (i_3 s< data_1b8ad6c)
        
        int128_t xmm0_1 = data_624a60
        __builtin_memcpy(0x1356f98, 0x1356f0c, 0x8c)
        data_1356f70.o = xmm0_1
        sub_431af0()
        
        if (data_13740b0 != 0)
            sub_41d040(eax_66, 0x1374238, 0x13742c4, 0x1374554, &data_1374350)
        
        sub_5794f0()
        sub_415d40()
        int32_t* eax_77 = sub_4a7b50()
        
        if (data_1b144b0 != 0 && data_1b144c8 != 0)
            eax_77 = sub_41d040(eax_77, 0x1b144f4, 0x1b14580, 0x1b14810, &data_1b1460c)
        
        sub_421640()
        
        if (data_702fc0 != 0 && data_1af414c != 0 && data_131905c != 0)
            __builtin_memcpy(0x1af0950, &data_1af08c4, 0x8c)
            data_1af0928 = 0xffffffff
            data_1af092c = 0xffffffff
            data_1af0930 = 0xffffffff
            data_1af0934 = 0xffffffff
        
        sub_4d1c30(eax_77, &data_1b8ad60, &var_28, 0x10)
        bool cond:16_1 = data_702fc0 == 0
        data_702fe8 = data_976f74
        data_702fec = data_976f78
        int32_t eax_80 = data_976f7c
        data_1b8ad60.o = zx.o(0)
        data_702ff0 = eax_80
        
        if (not(cond:16_1))
            eax_80 = data_703008
            
            if (data_1b14a24 != 0)
                eax_80 = 1
            
            data_703008 = eax_80
        
        int32_t var_38_9 = data_7030b8
        int32_t edx_25 = data_7030ac
        int32_t var_3c_6 = data_7030b4
        data_1b14a24 = 0
        int32_t eax_81 = sub_4d9090(eax_80, edx_25, &data_1b8ad60, data_7030b0, var_3c_6, var_38_9)
        
        if (data_1b8ad60 != 0)
            int32_t* ecx_43 = data_1b8ad64
            int32_t* var_18_7 = ecx_43
            int32_t i_10 = 0
            
            if (data_1b8ad6c s> 0)
                int32_t edx_26 = var_c_1
                int32_t edi_10 = edx_26
                
                if (edx_26 s<= 5)
                    edi_10 = 5
                
                int32_t i_4
                
                do
                    bool cond:24_1 = data_8c4ca4 == 0
                    data_702ff4 = *ecx_43
                    data_702ff8 = ecx_43[1]
                    data_702ffc = ecx_43[2]
                    int32_t eax_85 = ecx_43[3]
                    data_703000 = eax_85
                    
                    if (not(cond:24_1))
                        eax_85 = sub_42d2f0(0)
                        edx_26 = var_c_1
                    
                    int32_t esi_8 = 0xffffffff
                    
                    if (edi_10 s>= 0xffffffff)
                        do
                            if (edx_26 == esi_8)
                                eax_85 = sub_4b58e0()
                            
                            eax_85 = sub_4705b0(eax_85, esi_8, 0, edi_9, 0xb, 1, 1)
                            edx_26 = var_c_1
                            esi_8 += 1
                        while (esi_8 s<= edi_10)
                    
                    sub_41ecb0()
                    int32_t* eax_86 = sub_57b260()
                    
                    if (edi_10 s< 8)
                        sub_4705b0(eax_86, 8, 0, edi_9, 0xb, 1, 1)
                    
                    void* eax_87 = sub_57b340()
                    
                    if (edi_10 s< 9)
                        sub_4705b0(eax_87, 9, 0, edi_9, 0xb, 1, 1)
                    
                    void* eax_88 = sub_415e00()
                    
                    if (edi_10 s< 0xa)
                        sub_4705b0(eax_88, 0xa, 0, edi_9, 0xb, 1, 1)
                    
                    void* eax_89 = sub_4a79d0()
                    
                    if (edi_10 s< 0xb)
                        sub_4705b0(eax_89, 0xb, 0, edi_9, 0xb, 1, 1)
                    
                    sub_431a80()
                    sub_45fdc0()
                    sub_461570()
                    eax_81 = sub_420ff0()
                    
                    if (data_702fc0 != 0 && data_1af414c != 0 && data_131905c != 0)
                        void* eax_90 = data_1af08c0
                        eax_81 = sub_424660(eax_90, &data_1af08c4, eax_90 * 0x1c + &data_1af4770, 
                            1, 0xffffffff, 0, 0)
                    
                    i_4 = i_10 + 1
                    ecx_43 = &var_18_7[4]
                    i_10 = i_4
                    edx_26 = var_c_1
                    var_18_7 = ecx_43
                while (i_4 s< data_1b8ad6c)
        
        sub_46f8f0(eax_81, edi_9, 0, 0xb, 1)
        int128_t* ecx_48 = &var_28
        
        if (data_703008 == 0)
            sub_494e30(ecx_48)
            sub_494e30(&data_1b8ad60)
            sub_4d6c40(&var_28, &var_28:4)
            var_28 = zx.o(0)
            sub_4d6c40(&data_1b8ad60, &data_1b8ad64)
            data_1b8ad60.o = zx.o(0)
            ecx_2 = sub_494f60()
            data_7030d4 = 0
        else
            sub_4d6c40(ecx_48, &var_28:4)
            var_28 = zx.o(0)
            sub_4d6c40(&data_1b8ad60, &data_1b8ad64)
            data_1b8ad60.o = zx.o(0)
            ecx_2 = sub_4a5090()
            data_7030d4 = 0
    else if (esi == 2)
        int32_t eax_91 = data_1af4144
        data_1b8ad70 = eax_91
        data_1332b54 = eax_91
        data_976f74 = eax_91
        data_976f78 = data_1332b60
        data_976f7c = data_1332b64
        int32_t* eax_94 = data_7030c8
        int32_t var_38_10 = ecx_2
        data_1b1bcc8 = esi
        sub_49bf30(0, 0)
        data_702fe8 = data_976eb4
        data_702fec = data_976eb8
        data_702ff0 = data_976ebc
        int32_t* eax_99 = sub_46f660(sub_42d270(0), 0xffffffff, 0, 0xb, 0)
        
        if (data_702fc0 != 0)
            eax_99 = data_703008
            
            if (data_1b14a24 != 0)
                eax_99 = 1
            
            data_703008 = eax_99
        
        data_1b14a24 = 0
        sub_41cd30(eax_99, 0x1356f98, 0x1356f0c, nullptr, nullptr)
        sub_431a00()
        data_1374350 = 0
        int32_t* eax_100 = sub_579480()
        
        if (data_13740b0 != 0)
            sub_41cd30(eax_100, 0x13742c4, 0x1374238, &data_1374350, 0x1374554)
        
        sub_415ad0()
        sub_4a75b0()
        sub_461430()
        int32_t eax_101 = sub_420f30()
        
        if (data_702fc0 != 0 && data_1af414c != 0 && data_131905c != 0)
            eax_101 = sub_45fc30()
        
        if (data_703008 != 0)
            int32_t edx_33 = data_1b8c88c * data_1be46d0
            int32_t ecx_50 = data_1be46dc
            data_1be46d4 = 0
            sub_4d1ba0(eax_101, edx_33, ecx_50, 1)
        
        sub_494f60()
        
        if (data_1b8ad60 != 0)
            int32_t* edi_11 = data_1b8ad64
            int32_t i_9 = 0
            
            if (data_1b8ad6c s> 0)
                int32_t i_5
                
                do
                    bool cond:5_1 = data_8c4ca4 != 0
                    data_702ff4 = *edi_11
                    data_702ff8 = edi_11[1]
                    data_702ffc = edi_11[2]
                    data_703000 = edi_11[3]
                    int32_t eax_106
                    
                    if (cond:5_1)
                        eax_106 = sub_42d2f0(0)
                    else
                        eax_106 = sub_413ef0(4)
                    
                    for (int32_t j_2 = 0xffffffff; j_2 s<= 5; j_2 += 1)
                        if (j_2 == 0xfffffc18)
                            eax_106 = sub_4b58e0()
                        
                        eax_106 = sub_4705b0(eax_106, j_2, 0, 0xffffffff, 0xb, 0, 1)
                    
                    sub_41ecb0()
                    sub_4705b0(sub_57b260(), 8, 0, 0xffffffff, 0xb, 0, 1)
                    sub_4705b0(sub_57b340(), 9, 0, 0xffffffff, 0xb, 0, 1)
                    sub_4705b0(sub_415e00(), 0xa, 0, 0xffffffff, 0xb, 0, 1)
                    sub_4705b0(sub_4a79d0(), 0xb, 0, 0xffffffff, 0xb, 0, 1)
                    sub_431a80()
                    sub_45fdc0()
                    sub_461570()
                    sub_420ff0()
                    
                    if (data_702fc0 != 0 && data_1af414c != 0 && data_131905c != 0)
                        void* eax_111 = data_1af08c0
                        sub_424660(eax_111, &data_1af08c4, eax_111 * 0x1c + &data_1af4770, 1, 
                            0xffffffff, 0, 0)
                    
                    edi_11 = &edi_11[4]
                    i_5 = i_9 + 1
                    i_9 = i_5
                while (i_5 s< data_1b8ad6c)
        
        int32_t eax_112 = data_ef08e8
        int32_t eax_113 = eax_112 - 1
        
        if (eax_112 == 1)
            __builtin_memcpy(0xef09dc, 0xef0950, 0x8c)
            data_ef09b4 = 0xffffffff
            data_ef09b8 = 0xffffffff
            data_ef09bc = 0xffffffff
            data_ef09c0 = 0xffffffff
        else
            int32_t temp3_1 = eax_113
            eax_113 -= 1
            
            if (temp3_1 == 1)
                eax_113 = sub_4301e0(&data_ef08f8)
        
        int32_t* eax_114 = sub_46f8f0(eax_113, 0xffffffff, 0, 0xb, 0)
        int128_t xmm0_2 = data_624a60
        __builtin_memcpy(0x1356f98, 0x1356f0c, 0x8c)
        data_1356f70.o = xmm0_2
        sub_431af0()
        
        if (data_13740b0 != 0)
            sub_41d040(eax_114, 0x1374238, 0x13742c4, 0x1374554, &data_1374350)
        
        sub_5794f0()
        sub_415d40()
        int32_t* eax_115 = sub_4a7b50()
        
        if (data_1b144b0 != 0 && data_1b144c8 != 0)
            sub_41d040(eax_115, 0x1b144f4, 0x1b14580, 0x1b14810, &data_1b1460c)
        
        sub_421640()
        
        if (data_702fc0 != 0 && data_1af414c != 0 && data_131905c != 0)
            __builtin_memcpy(0x1af0950, &data_1af08c4, 0x8c)
            data_1af0928 = 0xffffffff
            data_1af092c = 0xffffffff
            data_1af0930 = 0xffffffff
            data_1af0934 = 0xffffffff
        
        sub_4d6c40(&data_1b8ad60, &data_1b8ad64)
        data_702fe8 = data_976e94
        data_702fec = data_976e98
        data_702ff0 = data_976e9c
        bool cond:7_1 = data_7030d0 != 0
        data_1b8ad60.o = zx.o(0)
        int32_t eax_119
        eax_119.b = cond:7_1
        int32_t eax_120 = data_703008
        
        if (data_702fc0 != 0)
            if (data_1b14a24 != 0)
                eax_120 = 1
            
            data_703008 = eax_120
        
        data_1b14a24 = 0
        
        if (eax_120 != 0)
            int32_t edx_36 = data_1b8c88c * data_1be46d0
            int32_t ecx_55 = data_1be46dc
            data_1be46d4 = 0
            sub_4d1ba0(eax_120, edx_36, ecx_55, 1)
        
        sub_494f60()
        
        if (data_1b8ad60 != 0)
            int32_t* esi_10 = data_1b8ad64
            int32_t i_6 = 0
            
            if (data_1b8ad6c s> 0)
                do
                    data_702ff4 = *esi_10
                    data_702ff8 = esi_10[1]
                    data_702ffc = esi_10[2]
                    data_703000 = esi_10[3]
                    
                    if (eax_119 != 0)
                        sub_413ef0(0)
                    else if (data_8c4ca4 != 0)
                        sub_42d2f0(0)
                    else
                        sub_413ef0(0)
                    
                    i_6 += 1
                    esi_10 = &esi_10[4]
                while (i_6 s< data_1b8ad6c)
        
        sub_494e30(&data_1b8ad60)
        sub_4d6c40(&data_1b8ad60, &data_1b8ad64)
        bool cond:11_1 = data_702fc0 == 0
        data_702fe8 = data_976f74
        data_702fec = data_976f78
        data_702ff0 = data_976f7c
        int32_t eax_128 = data_703008
        data_1b8ad60.o = zx.o(0)
        
        if (not(cond:11_1))
            if (data_1b14a24 != 0)
                eax_128 = 1
            
            data_703008 = eax_128
        
        data_1b14a24 = 0
        
        if (eax_128 != 0)
            int32_t edx_38 = data_1b8c88c * data_1be46d0
            int32_t ecx_56 = data_1be46dc
            data_1be46d4 = 0
            eax_128 = sub_4d1ba0(eax_128, edx_38, ecx_56, 1)
        
        int32_t var_38_11 = data_7030b8
        sub_494d60(eax_128, data_7030b0, data_7030ac, data_7030b4)
        int32_t eax_129 = sub_494f60()
        
        if (data_1b8ad60 != 0)
            int32_t* esi_11 = data_1b8ad64
            int32_t i_7 = 0
            
            if (data_1b8ad6c s> 0)
                do
                    bool cond:18_1 = data_8c4ca4 != 0
                    data_702ff4 = *esi_11
                    data_702ff8 = esi_11[1]
                    data_702ffc = esi_11[2]
                    data_703000 = esi_11[3]
                    
                    if (cond:18_1)
                        eax_129 = sub_42d2f0(0)
                    else
                        eax_129 = sub_413ef0(2)
                    
                    i_7 += 1
                    esi_11 = &esi_11[4]
                while (i_7 s< data_1b8ad6c)
        
        sub_4d1c30(eax_129, &data_1b8ad60, &var_28, 0x10)
        data_1b8ad60.o = zx.o(0)
        sub_488ad0(eax_94, 0, 3, 4, eax_94, 0, eax_94, 0, 2, 0, 0, 0, 1)
        int128_t* ecx_59 = &var_28
        
        if (data_703008 == 0)
            sub_494e30(ecx_59)
            sub_494e30(&data_1b8ad60)
            sub_4d9060(&var_28)
            sub_4d9060(&data_1b8ad60)
            ecx_2 = sub_494f60()
            data_7030d4 = 0
        else
            sub_4d9060(ecx_59)
            sub_4d9060(&data_1b8ad60)
            ecx_2 = sub_4a5090()
            data_7030d4 = 0
    int32_t var_38_12 = ecx_2
    int32_t ecx_61
    
    if (data_1b1bcc8 != 0)
        int32_t eax_136 = sub_49bf30(0, 0)
        
        if (data_703008 == 0)
            result, ecx_61 = sub_494f60()
        else
            int32_t edx_41 = data_1b8c88c * data_1be46d0
            int32_t ecx_62 = data_1be46dc
            data_1be46d4 = 0
            sub_4d1ba0(eax_136, edx_41, ecx_62, 0)
            result, ecx_61 = sub_4a5090()
    else
        result, ecx_61 =
            sub_488ad0(sub_49bf30(0, 0), 0, 4, 1, nullptr, 0, 0xfffffc18, 2, 0, 1, 1, 1, 1)
    
    if (data_1b1bcc8 == 1)
        int32_t eax_137 = data_976b54
        
        if (eax_137 == 0)
            eax_137 = data_1af4144
            data_1b1bcc8 = 0
        else
            data_1b1bcc8 = 1
        
        data_1b8ad70 = eax_137
        data_1332b54 = eax_137
        data_976f74 = eax_137
        data_976f78 = data_1332b60
        result = data_1332b64
        data_976f7c = result
    
    if (data_702fc0 != 0)
        if (data_1313258 != 0)
            result, ecx_61 = sub_475ce0()
        
        if (data_131325c != 0)
            result, ecx_61 = sub_475f60()
        
        if (data_1318c34 != 0)
            result, ecx_61 = sub_4761c0()
        
        if (data_1313244 != 0)
            sub_4a5d90(ecx_61)
            result = sub_4a5090()
    
    data_1af17bc = 0
    data_1b8a71c = 1
    data_703008 = 0
    data_1b14a28 = 0
    data_1b8a718 = 0
else if (data_7030d0 == esi)
    goto label_489433

return result
