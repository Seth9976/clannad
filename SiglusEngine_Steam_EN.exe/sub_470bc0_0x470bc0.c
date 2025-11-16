// 函数: sub_470bc0
// 地址: 0x470bc0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = *(arg3 + 4)

if (ecx == 0 && *(arg3 + 8) u<= ecx)
    return 

int32_t edx
int32_t edi_1

if (arg3[0x11] == 0)
    if (*arg3 != 0)
        *arg3 = 0
    else
        *(arg3 + 0xc) += zx.d(arg3[0x10]) * data_1b14a28
    
    arg1 = *(arg3 + 0xc)
    edi_1 = 0
    edx = *(arg3 + 8)
    
    if (arg1 u> edx)
        edi_1 = arg1 - edx

if (arg3[0x11] != 0 || (arg1 u> edx && ecx u<= edi_1))
    *(arg3 + 4) = 0
    *(arg3 + 8) = 0
    return 

*(arg2 + 0x4c) = 1

if (*(arg3 + 4) u< 4)
    *(arg3 + 4) = 4

uint32_t ecx_2 = *(arg3 + 4) u>> 1
uint32_t edx_2 = ecx_2 u>> 1
int32_t var_80 = 0
int32_t var_7c = 0
uint32_t eax_2 = edx_2 + ecx_2
int32_t var_50_1 = 0
uint32_t edx_3 = 1
int32_t eax_3 = 0
uint32_t var_58_1 = 0
uint32_t var_84_1 = 1
bool cond:0_1 = arg3[0x12] == 1
uint32_t var_68 = 0

if (cond:0_1)
    eax_3 = 1

int32_t var_90 = 0
int32_t var_88_1 = eax_3
eax_3.b = arg3[0x13]
int32_t var_44 = 0

if (eax_3.b u>= 1 && eax_3.b u<= 8)
    int16_t edx_4 = *(arg3 + 0x14)
    
    if (edx_4 == 0)
        edx_3 = 1
    else
        var_68 = zx.d(eax_3.b)
        int32_t ecx_4 = sx.d(edx_4)
        edx_3 = 1
        var_44 = ecx_4
        
        if (edx_4 s< 0)
            var_44 = neg.d(ecx_4)

uint32_t esi_1 = 0
uint32_t var_74 = 0
int32_t var_8c = 0
int32_t var_48 = 0

if (eax_3.b u>= 1 && eax_3.b u<= 8)
    int16_t ecx_6 = *(arg3 + 0x16)
    
    if (ecx_6 != 0)
        esi_1 = zx.d(eax_3.b)
        eax_3 = sx.d(ecx_6)
        var_74 = esi_1
        var_48 = eax_3
        
        if (ecx_6 s< 0)
            var_48 = neg.d(eax_3)

if (var_68 == 0)
    if (esi_1 == 0)
        edx_3 = 0
    
    var_84_1 = edx_3

eax_3.b = arg3[0x1a]
uint32_t var_78_1

if (eax_3.b u< 1 || eax_3.b u> 3 || *(arg3 + 0x1c) == 0x3e8)
    var_78_1 = 0
else
    var_78_1 = zx.d(eax_3.b)

eax_3.b = arg3[0x1e]
uint32_t eax_4

if (eax_3.b u< 1 || eax_3.b u> 3 || *(arg3 + 0x20) == 0x3e8)
    eax_4 = 0
else
    eax_4 = zx.d(eax_3.b)

char ecx_7 = arg3[0x22]
uint32_t var_64_1 = 0

if (ecx_7 u>= 1 && ecx_7 u<= 3)
    int16_t eax_5 = *(arg3 + 0x24)
    
    if (eax_5 != 0 && arg3[0x26] u> 0)
        if (eax_5 == 0xffff)
            *(arg3 + 0x24) = -2
        else if (eax_5 == 1)
            *(arg3 + 0x24) = 2
        
        var_64_1 = zx.d(ecx_7)
        var_84_1 = 1

int32_t var_3c
int32_t var_c_2
uint32_t eax_68
uint32_t ecx_43
uint32_t esi_20

if (arg4 != 0)
    int32_t i = 0
    int32_t i_2 = 0
    
    do
        uint32_t* eax_124
        int32_t* ecx_48
        int32_t* edx_80
        
        if (i != 0)
            eax_124 = &var_74
            ecx_48 = &var_48
            edx_80 = &var_7c
        else
            eax_124 = &var_68
            ecx_48 = &var_44
            edx_80 = &var_80
        
        uint32_t esi_22 = *eax_124
        int32_t var_38_6
        int32_t eax_129
        int32_t esi_23
        
        if (esi_22 != 0 && esi_22 - 1 u<= 7)
            switch (esi_22)
                case 1
                    int32_t ecx_49 = *ecx_48
                    *edx_80 = ecx_49 - divu.dp.d(0:(ecx_49 * edi_1), *(arg3 + 4))
                case 2
                    esi_23 = *ecx_48
                    eax_129 = *(arg3 + 4)
                    int32_t var_24_7 = data_1392710
                    int32_t var_30_7 = 0
                    var_3c = esi_23
                    var_38_6 = 0
                    int32_t var_18_7 = 1
                    
                    if (eax_129 s< 0)
                        eax_129 = neg.d(eax_129)
                    
                    char var_34_7 = 4
                label_4714b9:
                    int32_t var_28_6 = esi_23
                    int32_t var_2c_6 = esi_23
                    int32_t var_20_6 = 0
                    int32_t var_1c_6 = eax_129
                    sub_4d1fd0(&var_3c, edi_1)
                    *edx_80 = esi_23 - var_38_6
                case 3
                    esi_23 = *ecx_48
                    eax_129 = *(arg3 + 4)
                    int32_t var_24_8 = data_1392710
                    int32_t var_30_8 = 0
                    var_3c = esi_23
                    var_38_6 = 0
                    int32_t var_18_8 = 1
                    
                    if (eax_129 s< 0)
                        eax_129 = neg.d(eax_129)
                    
                    char var_34_8 = 3
                    goto label_4714b9
                case 4
                    int32_t esi_26 = *ecx_48 s>> 1
                    
                    if (esi_26 != 0)
                        int32_t temp0_31 = divs.dp.d(sx.q(sub_4d1650(0x55)), esi_26)
                        
                        if (temp0_31 != 0)
                            *edx_80 = divs.dp.d(
                                sx.q(sub_4d1650(sub_4d2110(temp0_31, edi_1, 0, *(arg3 + 4), 0x14a, 
                                    0x275))), 
                                temp0_31) + divs.dp.d(sx.q(sub_4d1650(0x5a)), temp0_31)
                case 5
                    int32_t esi_31 = *ecx_48 s>> 1
                    
                    if (esi_31 != 0)
                        int32_t temp0_34 = divs.dp.d(sx.q(sub_4d1650(0x55)), esi_31)
                        
                        if (temp0_34 != 0)
                            int32_t eax_145
                            int32_t edx_95
                            edx_95:eax_145 = sx.q(sub_4d1650(sub_4d2110(temp0_34, edi_1, 0, 
                                *(arg3 + 4), 0x10e, 0x1ee)))
                            *edx_80 = divs.dp.d(sx.q(sub_4d1650(0x2d)), temp0_34)
                                - divs.dp.d(edx_95:eax_145, temp0_34)
                case 6, 7, 8
                    int32_t temp0_37 = divs.dp.d(sx.q(sub_4d1650(0x55)), *ecx_48)
                    *ecx_48
                    
                    if (temp0_37 != 0)
                        int32_t eax_155 = esi_22 - 6
                        int32_t var_a4_2
                        
                        if (esi_22 == 6)
                            var_a4_2 = 0x167
                        else
                            int32_t temp13_1 = eax_155
                            eax_155 -= 1
                            
                            if (temp13_1 == 1)
                                var_a4_2 = 0x2cf
                            else
                                int32_t temp18_1 = eax_155
                                eax_155 -= 1
                                
                                var_a4_2 = temp18_1 != 1 ? 0x167 : 0x437
                        
                        int32_t temp0_38 = divs.dp.d(
                            sx.q(sub_4d1650(sub_4d2110(eax_155, edi_1, 0, *(arg3 + 4), 0x5a, 
                                var_a4_2))), 
                            temp0_37)
                        *edx_80 = temp0_38
                        uint32_t eax_163
                        
                        if (esi_22 == 6)
                            if (edi_1 u> edx_2)
                                uint32_t eax_165 = edi_1 - edx_2
                                
                                if (eax_165 u> eax_2)
                                    eax_165 = eax_2
                                
                                eax_163 = divu.dp.d(0:(eax_165 * 0x64), eax_2)
                                goto label_471673
                        else if (esi_22 - 7 u<= 1)
                            eax_163 = divu.dp.d(0:(edi_1 * 0x64), *(arg3 + 4))
                        label_471673:
                            *edx_80 = (0x64 - eax_163) * temp0_38 s/ 0x64
        i = i_2 + 1
        i_2 = i
    while (i s< 2)
    
    int32_t esi_35 = *(arg3 + 4)
    
    if (var_78_1 == 0)
        var_c_2 = 0x3e8
    else
        int32_t ecx_63
        
        if (var_78_1 == 1)
            ecx_63 = edi_1
        else if (var_78_1 == 2)
            int32_t eax_176 = esi_35
            int32_t var_24_10 = data_1392710
            int32_t var_30_10 = 0
            var_3c = esi_35
            int32_t var_38_8 = 0
            int32_t var_18_10 = 1
            
            if (eax_176 s< 0)
                eax_176 = neg.d(eax_176)
            
            int32_t var_1c_8 = eax_176
            int32_t var_20_8 = 0
            int32_t var_2c_8 = esi_35
            int32_t var_28_8 = esi_35
            char var_34_10 = 4
            sub_4d1fd0(&var_3c, edi_1)
            ecx_63 = var_38_8
        else if (var_78_1 != 3)
            ecx_63 = edi_1
        else
            int32_t eax_175 = esi_35
            int32_t var_24_9 = data_1392710
            int32_t var_30_9 = 0
            var_3c = esi_35
            int32_t var_38_7 = 0
            int32_t var_18_9 = 1
            
            if (eax_175 s< 0)
                eax_175 = neg.d(eax_175)
            
            int32_t var_1c_7 = eax_175
            int32_t var_20_7 = 0
            int32_t var_2c_7 = esi_35
            int32_t var_28_7 = esi_35
            char var_34_9 = 3
            sub_4d1fd0(&var_3c, edi_1)
            ecx_63 = var_38_7
        
        int32_t edx_114 = sx.d(*(arg3 + 0x1c))
        
        if (ecx_63 u>= esi_35)
            var_c_2 = 0x3e8
        else if (edx_114 s> 0x3e8)
            int32_t ecx_71 =
                sx.d(*(arg3 + 0x1c)) - divu.dp.d(0:((edx_114 - 0x3e8) * ecx_63), esi_35)
            
            if (ecx_71 s< 0x3e8)
                ecx_71 = 0x3e8
            
            var_c_2 = ecx_71
        else
            int32_t eax_180 =
                divu.dp.d(0:((0x3e8 - edx_114) * ecx_63), esi_35) + sx.d(*(arg3 + 0x1c))
            var_c_2 = eax_180
            
            if (eax_180 s> 0x3e8)
                var_c_2 = 0x3e8
    
    if (eax_4 == 0)
        var_44 = 0x3e8
    else
        int32_t ecx_69
        
        if (eax_4 == 1)
            ecx_69 = edi_1
        else if (eax_4 == 2)
            int32_t eax_188 = esi_35
            int32_t var_24_12 = data_1392710
            int32_t var_30_12 = 0
            var_3c = esi_35
            int32_t var_38_10 = 0
            int32_t var_18_12 = 1
            
            if (eax_188 s< 0)
                eax_188 = neg.d(eax_188)
            
            int32_t var_1c_10 = eax_188
            int32_t var_20_10 = 0
            int32_t var_2c_10 = esi_35
            int32_t var_28_10 = esi_35
            char var_34_12 = 4
            sub_4d1fd0(&var_3c, edi_1)
            ecx_69 = var_38_10
        else if (eax_4 != 3)
            ecx_69 = edi_1
        else
            int32_t eax_184 = esi_35
            int32_t var_24_11 = data_1392710
            int32_t var_30_11 = 0
            var_3c = esi_35
            int32_t var_38_9 = 0
            int32_t var_18_11 = 1
            
            if (eax_184 s< 0)
                eax_184 = neg.d(eax_184)
            
            int32_t var_1c_9 = eax_184
            int32_t var_20_9 = 0
            int32_t var_2c_9 = esi_35
            int32_t var_28_9 = esi_35
            char var_34_11 = 3
            sub_4d1fd0(&var_3c, edi_1)
            ecx_69 = var_38_9
        
        eax_68 = sx.d(*(arg3 + 0x20))
        
        if (ecx_69 u>= esi_35)
            var_44 = 0x3e8
        else if (eax_68 s> 0x3e8)
            int32_t ecx_80 = sx.d(*(arg3 + 0x20)) - divu.dp.d(0:((eax_68 - 0x3e8) * ecx_69), esi_35)
            
            if (ecx_80 s< 0x3e8)
                ecx_80 = 0x3e8
            
            var_44 = ecx_80
        else
            eax_68 = divu.dp.d(0:((0x3e8 - eax_68) * ecx_69), esi_35) + sx.d(*(arg3 + 0x20))
            var_44 = eax_68
            
            if (eax_68 s> 0x3e8)
                var_44 = 0x3e8
    
    uint32_t edx_141
    
    if (var_64_1 == 0)
        ecx_43 = ecx_2
        edx_141 = eax_2
    else
        var_48 = divs.dp.d(sx.q(sub_4d1650(0x55)), sx.d(*(arg3 + 0x24)) s>> 1)
        uint32_t ecx_78 = zx.d(arg3[0x26]) * 0x168 - 1
        uint32_t var_10_7 = ecx_78
        
        if (edi_1 u< esi_35)
            int32_t edx_127 = 0
            int32_t eax_196 = ecx_78 * edi_1
            uint32_t eax_197
            
            if (ecx_78 s< 0)
                eax_197 = neg.d(divu.dp.d(edx_127:(neg.d(eax_196)), esi_35))
                
                if (eax_197 s< ecx_78)
                    eax_197 = ecx_78
            else
                eax_197 = divu.dp.d(edx_127:eax_196, esi_35)
                
                if (eax_197 s> ecx_78)
                    eax_197 = ecx_78
            
            ecx_78 = eax_197
            var_10_7 = eax_197
        
        if (var_64_1 == 1)
            edx_141 = eax_2
            var_50_1 = divs.dp.d(sx.q(sub_4d1650(ecx_78)), var_48)
            
            if (edi_1 u<= edx_141)
                ecx_43 = ecx_2
            else
                uint32_t eax_231 = edi_1 - edx_141
                
                if (eax_231 u> edx_2)
                    eax_231 = edx_2
                
                var_50_1 = (0x64 - divu.dp.d(0:(eax_231 * 0x64), edx_2)) * var_50_1 s/ 0x64
                ecx_43 = ecx_2
                edx_141 = eax_2
        else
            int32_t ecx_84
            
            if (var_64_1 == 2)
                edx_141 = eax_2
                var_58_1 = divs.dp.d(sx.q(sub_4d1650(ecx_78)), var_48)
                
                if (edi_1 u<= edx_141)
                    ecx_43 = ecx_2
                else
                    uint32_t eax_225 = edi_1 - edx_141
                    
                    if (eax_225 u> edx_2)
                        eax_225 = edx_2
                    
                    ecx_84 = 0x64 - divu.dp.d(0:(eax_225 * 0x64), edx_2)
                label_47198b:
                    var_58_1 = ecx_84 * var_58_1 s/ 0x64
                    ecx_43 = ecx_2
                    edx_141 = eax_2
            else if (var_64_1 != 3)
                ecx_43 = ecx_2
                edx_141 = eax_2
            else
                var_50_1 = divs.dp.d(sx.q(sub_4d1650(ecx_78)), var_48)
                ecx_43 = ecx_2
                var_58_1 = divs.dp.d(sx.q(sub_4d1770(var_10_7)), var_48)
                
                if (edi_1 u> ecx_43)
                    uint32_t eax_212 = edi_1 - ecx_43
                    
                    if (eax_212 u> ecx_43)
                        eax_212 = ecx_43
                    
                    ecx_84 = 0x64 - divu.dp.d(0:(eax_212 * 0x64), ecx_43)
                    var_50_1 = (0x64 - divu.dp.d(0:(eax_212 * 0x64), ecx_43)) * var_50_1 s/ 0x64
                    goto label_47198b
                
                edx_141 = eax_2
    
    if (var_88_1 == 0)
        if (edi_1 == 0)
            *(arg2 + 0x4c) = edi_1
        
        esi_20 = 0xff
    else if (var_84_1 u> 3)
        esi_20 = 0xff
    else
        switch (var_84_1)
            case 0
                esi_20 = divu.dp.d(0:(edi_1 * 0xff), esi_35)
            case 1
                if (edi_1 u>= edx_141)
                    esi_20 = 0xff
                else
                    esi_20 = divu.dp.d(0:(edi_1 * 0xff), eax_2)
            case 2
                goto label_471a65
            case 3
                ecx_43 = edx_2
            label_471a65:
                
                if (edi_1 u>= ecx_43)
                    esi_20 = 0xff
                else
                    esi_20 = divu.dp.d(0:(edi_1 * 0xff), ecx_43)
else
    int32_t i_1 = 0
    int32_t i_3 = 0
    
    do
        int32_t* var_c_1
        int32_t* eax_8
        int32_t* ecx_8
        uint32_t* esi_2
        
        if (i_1 != 0)
            var_c_1 = &var_7c
            esi_2 = &var_74
            ecx_8 = &var_48
            eax_8 = &var_8c
        else
            var_c_1 = &var_80
            esi_2 = &var_68
            ecx_8 = &var_44
            eax_8 = &var_90
        
        uint32_t esi_3 = *esi_2
        int32_t var_38_1
        int32_t eax_13
        int32_t ecx_10
        
        if (esi_3 != 0 && esi_3 - 1 u<= 7)
            switch (esi_3)
                case 1
                    *var_c_1 = divu.dp.d(0:(*ecx_8 * edi_1), *(arg3 + 4))
                case 2
                    eax_13 = *(arg3 + 4)
                    ecx_10 = *ecx_8
                    int32_t var_24_1 = data_1392710
                    int32_t var_30_1 = 0
                    var_3c = ecx_10
                    var_38_1 = 0
                    int32_t var_18_1 = 1
                    
                    if (eax_13 s< 0)
                        eax_13 = neg.d(eax_13)
                    
                    char var_34_1 = 4
                label_470e41:
                    int32_t var_28_1 = ecx_10
                    int32_t var_2c_1 = ecx_10
                    int32_t var_20_1 = 0
                    int32_t var_1c_1 = eax_13
                    sub_4d1fd0(&var_3c, edi_1)
                    *var_c_1 = var_38_1
                case 3
                    eax_13 = *(arg3 + 4)
                    ecx_10 = *ecx_8
                    int32_t var_24_2 = data_1392710
                    int32_t var_30_2 = 0
                    var_3c = ecx_10
                    var_38_1 = 0
                    int32_t var_18_2 = 1
                    
                    if (eax_13 s< 0)
                        eax_13 = neg.d(eax_13)
                    
                    char var_34_2 = 3
                    goto label_470e41
                case 4
                    int32_t esi_5 = *ecx_8 s>> 1
                    
                    if (esi_5 != 0)
                        int32_t temp0_2 = divs.dp.d(sx.q(sub_4d1650(0x55)), esi_5)
                        
                        if (temp0_2 != 0)
                            *var_c_1 = divs.dp.d(
                                sx.q(sub_4d1650(sub_4d2110(temp0_2, edi_1, 0, *(arg3 + 4), 0x10e, 
                                    0x239))), 
                                temp0_2) + divs.dp.d(sx.q(sub_4d1650(0x5a)), temp0_2)
                case 5
                    int32_t esi_10 = *ecx_8 s>> 1
                    
                    if (esi_10 != 0)
                        int32_t temp0_5 = divs.dp.d(sx.q(sub_4d1650(0x55)), esi_10)
                        
                        if (temp0_5 != 0)
                            int32_t eax_30
                            int32_t edx_21
                            edx_21:eax_30 = sx.q(sub_4d1650(sub_4d2110(temp0_5, edi_1, 0, 
                                *(arg3 + 4), 0x195, 0x275)))
                            *var_c_1 = divs.dp.d(sx.q(sub_4d1650(0x2d)), temp0_5)
                                - divs.dp.d(edx_21:eax_30, temp0_5)
                case 6, 7, 8
                    int32_t temp0_8 = divs.dp.d(sx.q(sub_4d1650(0x55)), *ecx_8)
                    *ecx_8
                    
                    if (temp0_8 != 0)
                        int32_t eax_40 = esi_3 - 6
                        int32_t var_a4_1
                        
                        if (esi_3 == 6)
                            var_a4_1 = 0x10d
                        else
                            int32_t temp16_1 = eax_40
                            eax_40 -= 1
                            
                            if (temp16_1 == 1)
                                var_a4_1 = 0x275
                            else
                                int32_t temp20_1 = eax_40
                                eax_40 -= 1
                                
                                var_a4_1 = temp20_1 != 1 ? 0x10d : 0x3dd
                        
                        int32_t temp0_9 = divs.dp.d(
                            sx.q(sub_4d1650(sub_4d2110(eax_40, edi_1, 0, *(arg3 + 4), 0, 
                                var_a4_1))), 
                            temp0_8)
                        *var_c_1 = temp0_9
                        uint32_t eax_48
                        
                        if (esi_3 == 6)
                            if (edi_1 u< eax_2)
                                eax_48 = divu.dp.d(0:(edi_1 * 0x64), eax_2)
                            label_470ff1:
                                *var_c_1 = eax_48 * temp0_9 s/ 0x64
                        else if (esi_3 - 7 u<= 1)
                            eax_48 = divu.dp.d(0:(edi_1 * 0x64), *(arg3 + 4))
                            goto label_470ff1
                        *eax_8 = 1
        i_1 = i_3 + 1
        i_3 = i_1
    while (i_1 s< 2)
    
    int32_t esi_14 = *(arg3 + 4)
    
    if (var_78_1 == 0)
        var_c_2 = 0x3e8
    else
        int32_t edx_37
        
        if (var_78_1 == 1)
            edx_37 = edi_1
        else if (var_78_1 == 2)
            int32_t eax_60 = esi_14
            int32_t var_24_4 = data_1392710
            int32_t var_30_4 = 0
            var_3c = esi_14
            int32_t var_38_3 = 0
            int32_t var_18_4 = 1
            
            if (eax_60 s< 0)
                eax_60 = neg.d(eax_60)
            
            int32_t var_1c_3 = eax_60
            int32_t var_20_3 = 0
            int32_t var_2c_3 = esi_14
            int32_t var_28_3 = esi_14
            char var_34_4 = 4
            sub_4d1fd0(&var_3c, edi_1)
            edx_37 = var_38_3
        else if (var_78_1 != 3)
            edx_37 = edi_1
        else
            int32_t eax_59 = esi_14
            int32_t var_24_3 = data_1392710
            int32_t var_30_3 = 0
            var_3c = esi_14
            int32_t var_38_2 = 0
            int32_t var_18_3 = 1
            
            if (eax_59 s< 0)
                eax_59 = neg.d(eax_59)
            
            int32_t var_1c_2 = eax_59
            int32_t var_20_2 = 0
            int32_t var_2c_2 = esi_14
            int32_t var_28_2 = esi_14
            char var_34_3 = 3
            sub_4d1fd0(&var_3c, edi_1)
            edx_37 = var_38_2
        
        int32_t ecx_28 = sx.d(*(arg3 + 0x1c))
        var_c_2 = ecx_28
        
        if (edx_37 u< esi_14)
            int32_t ecx_29
            
            if (ecx_28 s< 0x3e8)
                ecx_29 = 0x3e8 - divu.dp.d(0:((0x3e8 - ecx_28) * edx_37), esi_14)
                
                if (ecx_29 s< var_c_2)
                    ecx_29 = var_c_2
                
                var_c_2 = ecx_29
            else
                ecx_29 = divu.dp.d(0:((ecx_28 - 0x3e8) * edx_37), esi_14) + 0x3e8
                
                if (ecx_29 s<= var_c_2)
                    var_c_2 = ecx_29
    
    if (eax_4 == 0)
        var_44 = 0x3e8
    else
        int32_t edx_44
        
        if (eax_4 == 1)
            edx_44 = edi_1
        else if (eax_4 == 2)
            int32_t eax_71 = esi_14
            int32_t var_24_6 = data_1392710
            int32_t var_30_6 = 0
            var_3c = esi_14
            int32_t var_38_5 = 0
            int32_t var_18_6 = 1
            
            if (eax_71 s< 0)
                eax_71 = neg.d(eax_71)
            
            int32_t var_1c_5 = eax_71
            int32_t var_20_5 = 0
            int32_t var_2c_5 = esi_14
            int32_t var_28_5 = esi_14
            char var_34_6 = 4
            sub_4d1fd0(&var_3c, edi_1)
            edx_44 = var_38_5
        else if (eax_4 != 3)
            edx_44 = edi_1
        else
            int32_t eax_70 = esi_14
            int32_t var_24_5 = data_1392710
            int32_t var_30_5 = 0
            var_3c = esi_14
            int32_t var_38_4 = 0
            int32_t var_18_5 = 1
            
            if (eax_70 s< 0)
                eax_70 = neg.d(eax_70)
            
            int32_t var_1c_4 = eax_70
            int32_t var_20_4 = 0
            int32_t var_2c_4 = esi_14
            int32_t var_28_4 = esi_14
            char var_34_5 = 3
            sub_4d1fd0(&var_3c, edi_1)
            edx_44 = var_38_4
        
        int32_t ecx_35 = sx.d(*(arg3 + 0x20))
        var_44 = ecx_35
        
        if (edx_44 u< esi_14)
            int32_t edx_47
            
            if (ecx_35 s< 0x3e8)
                edx_47 = 0x3e8 - divu.dp.d(0:((0x3e8 - ecx_35) * edx_44), esi_14)
                
                if (edx_47 s< ecx_35)
                    edx_47 = ecx_35
                
                var_44 = edx_47
            else
                edx_47 = divu.dp.d(0:((ecx_35 - 0x3e8) * edx_44), esi_14) + 0x3e8
                
                var_44 = edx_47 s<= ecx_35 ? edx_47 : ecx_35
    
    uint32_t esi_15
    
    if (var_64_1 == 0)
        ecx_43 = edx_2
        esi_15 = ecx_2
    else
        var_48 = divs.dp.d(sx.q(sub_4d1650(0x55)), sx.d(*(arg3 + 0x24)) s>> 1)
        uint32_t ecx_39 = zx.d(arg3[0x26]) * 0x168 - 1
        uint32_t var_10_1 = ecx_39
        
        if (edi_1 u< esi_14)
            int32_t edx_52 = 0
            int32_t eax_81 = ecx_39 * edi_1
            uint32_t eax_82
            
            if (ecx_39 s< 0)
                eax_82 = neg.d(divu.dp.d(edx_52:(neg.d(eax_81)), esi_14))
                
                if (eax_82 s< ecx_39)
                    eax_82 = ecx_39
            else
                eax_82 = divu.dp.d(edx_52:eax_81, esi_14)
                
                if (eax_82 s> ecx_39)
                    eax_82 = ecx_39
            
            ecx_39 = eax_82
            var_10_1 = eax_82
        
        if (var_64_1 == 1)
            int32_t temp0_24 = divs.dp.d(sx.q(sub_4d1650(ecx_39)), var_48)
            ecx_43 = edx_2
            var_50_1 = temp0_24
            
            if (edi_1 u>= ecx_43)
                esi_15 = ecx_2
            else
                var_50_1 = divu.dp.d(0:(edi_1 * 0x64), ecx_43) * temp0_24 s/ 0x64
                ecx_43 = edx_2
                esi_15 = ecx_2
        else
            int32_t edx_62
            
            if (var_64_1 == 2)
                int32_t temp0_22 = divs.dp.d(sx.q(sub_4d1650(ecx_39)), var_48)
                ecx_43 = edx_2
                var_58_1 = temp0_22
                
                if (edi_1 u>= ecx_43)
                    esi_15 = ecx_2
                else
                    int32_t eax_106
                    edx_62:eax_106 =
                        muls.dp.d(0x51eb851f, divu.dp.d(0:(edi_1 * 0x64), ecx_43) * temp0_22)
                label_4712fc:
                    int32_t edx_63 = edx_62 s>> 5
                    var_58_1 = (edx_63 u>> 0x1f) + edx_63
                    ecx_43 = edx_2
                    esi_15 = ecx_2
            else if (var_64_1 != 3)
                ecx_43 = edx_2
                esi_15 = ecx_2
            else
                var_50_1 = divs.dp.d(sx.q(sub_4d1650(ecx_39)), var_48)
                esi_15 = ecx_2
                var_58_1 = divs.dp.d(sx.q(sub_4d1770(var_10_1)), var_48)
                
                if (edi_1 u< esi_15)
                    uint32_t temp0_21 = divu.dp.d(0:(edi_1 * 0x64), esi_15)
                    var_50_1 = temp0_21 * var_50_1 s/ 0x64
                    int32_t eax_99
                    edx_62:eax_99 = muls.dp.d(0x51eb851f, temp0_21 * var_58_1)
                    goto label_4712fc
                
                ecx_43 = edx_2
    
    if (var_88_1 == 0 || var_84_1 u> 3)
        esi_20 = 0xff
    else
        switch (var_84_1)
            case 0
                esi_20 = 0xff - divu.dp.d(0:(edi_1 * 0xff), *(arg3 + 4))
            case 1
                if (edi_1 u<= ecx_43)
                    esi_20 = 0xff
                else
                    uint32_t eax_116 = edi_1 - ecx_43
                    
                    if (eax_116 u> eax_2)
                        eax_116 = eax_2
                    
                    esi_20 = 0xff - divu.dp.d(0:(eax_116 * 0xff), eax_2)
            case 2
                if (edi_1 u<= esi_15)
                    esi_20 = 0xff
                else
                    uint32_t eax_119 = edi_1 - esi_15
                    
                    if (eax_119 u> esi_15)
                        eax_119 = esi_15
                    
                    esi_20 = 0xff - divu.dp.d(0:(eax_119 * 0xff), esi_15)
            case 3
                if (edi_1 u<= eax_2)
                    esi_20 = 0xff
                else
                    uint32_t eax_122 = edi_1 - eax_2
                    
                    if (eax_122 u> ecx_43)
                        eax_122 = ecx_43
                    
                    esi_20 = 0xff - divu.dp.d(0:(eax_122 * 0xff), ecx_43)

ecx_43.b = arg3[0x18]
char var_3d_1

if (ecx_43.b != 0)
    eax_68.b = arg3[0x19]
    var_3d_1 = eax_68.b

uint32_t edi_3

if (ecx_43.b == 0 || eax_68.b == 0)
    edi_3 = arg2
else
    uint32_t ecx_90 = zx.d(ecx_43.b)
    int32_t var_38_11
    int32_t eax_240
    int32_t ecx_93
    
    if (ecx_90 == 2)
        ecx_93 = *(arg3 + 4)
        eax_240 = ecx_93
        int32_t var_24_14 = data_1392710
        int32_t var_30_14 = 0
        var_3c = ecx_93
        var_38_11 = 0
        int32_t var_18_14 = 1
        
        if (eax_240 s< 0)
            eax_240 = neg.d(eax_240)
        
        char var_34_14 = 4
    label_471b10:
        int32_t var_2c_11 = ecx_93
        int32_t var_28_11 = ecx_93
        int32_t var_1c_11 = eax_240
        int32_t var_20_11 = 0
        sub_4d1fd0(&var_3c, edi_1)
        eax_68.b = var_3d_1
        edi_1 = var_38_11
    else if (ecx_90 == 3)
        ecx_93 = *(arg3 + 4)
        eax_240 = ecx_93
        int32_t var_24_13 = data_1392710
        int32_t var_30_13 = 0
        var_3c = ecx_93
        var_38_11 = 0
        int32_t var_18_13 = 1
        
        if (eax_240 s< 0)
            eax_240 = neg.d(eax_240)
        
        char var_34_13 = 3
        goto label_471b10
    int32_t eax_241 = sx.d(eax_68.b)
    
    if (eax_68.b s< 0)
        eax_241 = neg.d(eax_241)
    
    int32_t eax_246
    
    if (eax_241 s< 0xa)
        eax_246 = sub_4d2110(eax_241 * 0xe10 - 1, edi_1, 0, *(arg3 + 4), 0, eax_241 * 0xe10 - 1)
    else
        eax_246 =
            sub_4d2110(eax_241 * 0x168 - 1, edi_1, 0, *(arg3 + 4), 0, eax_241 * 0x168 - 1) * 0xa
    
    if (var_3d_1 s< 0)
        eax_246 = neg.d(eax_246)
    
    edi_3 = arg2
    *(edi_3 + 0x60) += eax_246

if (var_78_1 != 0)
    int32_t eax_250
    int32_t edx_159
    edx_159:eax_250 = muls.dp.d(0x10624dd3, *(edi_3 + 0x58) * var_c_2)
    int32_t edx_160 = edx_159 s>> 6
    *(edi_3 + 0x58) = (edx_160 u>> 0x1f) + edx_160

if (eax_4 != 0)
    int32_t eax_255
    int32_t edx_161
    edx_161:eax_255 = muls.dp.d(0x10624dd3, *(edi_3 + 0x5c) * var_44)
    int32_t edx_162 = edx_161 s>> 6
    *(edi_3 + 0x5c) = (edx_162 u>> 0x1f) + edx_162

if (var_68 != 0)
    int32_t eax_259 = var_80
    
    if (*(arg3 + 0x14) s< 0)
        eax_259 = neg.d(eax_259)
    
    if (var_90 != 0)
        eax_259 = neg.d(eax_259)
    
    *arg5 += eax_259

if (var_74 != 0)
    int32_t eax_260 = var_7c
    
    if (*(arg3 + 0x16) s< 0)
        eax_260 = neg.d(eax_260)
    
    if (var_8c != 0)
        eax_260 = neg.d(eax_260)
    
    *arg6 += eax_260

*arg5 += var_50_1
*arg6 += var_58_1

if (esi_20 == 0)
    *(edi_3 + 0x48) = 0
    return 

if (esi_20 s< 0xff)
    *(edi_3 + 0x48) = (zx.d(*(edi_3 + 0x48)) * esi_20 s/ 0xff).b
