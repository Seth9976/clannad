// 函数: sub_48f110
// 地址: 0x48f110
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_214
int32_t eax_1 = __security_cookie ^ &var_214
char* var_238_2
char* var_234_1
char var_210[0x204]
char (* eax_4)[0x204]

if (arg3[0xe] s> 0)
    int32_t ecx_2 = arg3[3]
    
    if (ecx_2 == 0xffffffff)
        if (data_702fc0 != 0)
            int32_t ecx_3
            
            if (arg4 != 0)
                ecx_3 = 8
                
                if (arg5 u<= 7)
                    ecx_3 = arg5
            else
                ecx_3 = 9
            
            int32_t var_224_4 = (&data_611558)[ecx_3]
            sub_4c84d0(&data_7027c0, 0x61ab5c)
            
            if (data_702fc0 != 0)
                int32_t eax_5 = 1
                
                if (data_13184f8 == 0)
                    if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                        eax_5 = 0
                    
                    if (data_1311178 != 0 && data_13184e8:4 == 0)
                        eax_5 = 0
                    
                    if (data_1af174c == 0 && eax_5 != 0)
                        sub_55f390(
                            sub_55f1e0(
                                sub_55ef70(eax_5, data_72d6ac, data_719b6c, &data_7027c0, 
                                    0x61ab74), 
                                data_72d6ac, data_719b6c, &data_7027c0, 0x61ab74), 
                            data_72d6ac, data_719b6c, &data_7027c0, 0x61ab74)
        
        goto label_48f2e7
    
    if (ecx_2 != arg4)
        if (data_702fc0 == 0)
            goto label_48f4d7
        
        if (arg4 != 0)
            int32_t ecx_15 = 8
            
            if (arg5 u<= 7)
                ecx_15 = arg5
            
            int32_t var_224_9 = (&data_611558)[ecx_15]
            char* eax_22 = sub_4c84d0(&data_7027c0, 0x613844)
            
            if (data_702fc0 == 0)
                goto label_48f4d7
            
            eax_4 = sub_55f1e0(
                sub_55ef70(eax_22, data_72d6ac, data_719b6c, &data_7027c0, "GOSUB "), data_72d6ac, 
                data_719b6c, &data_7027c0, "GOSUB ")
            var_234_1 = "GOSUB "
            goto label_48f4ab
        
        int32_t ecx_12 = arg3[4]
        int32_t eax_19 = 8
        
        if (ecx_12 s>= 0 && ecx_12 s< 8)
            eax_19 = ecx_12
        
        int32_t var_224_8 = (&data_611558)[eax_19]
        int32_t var_228_3 = (&data_6114f8)[eax_19]
        char* eax_20 = sub_4c84d0(&data_7027c0, 0x61ab98)
        
        if (data_702fc0 == 0)
            goto label_48f4d7
        
        eax_4 = sub_55f1e0(
            sub_55ef70(eax_20, data_72d6ac, data_719b6c, &data_61abb4, &data_7027c0), data_72d6ac, 
            data_719b6c, &data_61abb4, &data_7027c0)
        var_234_1 = &data_7027c0
        var_238_2 = &data_61abb4
        goto label_48f4bc
    
    void* var_230_1
    int32_t* var_22c_3
    void* var_228_1
    int32_t* var_224_5
    
    if (arg4 == 0)
    label_48f2e7:
        var_224_5 = &arg3[0x4ed0]
        var_228_1 = &arg3[5]
        var_22c_3 = &arg3[4]
        var_230_1 = &arg3[3]
    label_48f2fe:
        int32_t result = sub_48db10(&arg3[1], arg3, &arg3[0xe], &arg3[1], &arg3[2], var_230_1, 
            var_22c_3, var_228_1, var_224_5)
        sub_5f02dd(eax_1 ^ &var_214)
        return result
    
    if (arg3[4] == arg5)
        var_224_5 = &arg3[0x4ed0]
        var_228_1 = &arg3[5]
        var_22c_3 = &arg3[4]
        var_230_1 = &arg3[3]
        goto label_48f2fe
    
    if (data_702fc0 == 0)
        goto label_48f4d7
    
    int32_t eax_17 = 8
    
    if (arg5 u<= 7)
        eax_17 = arg5
    
    int32_t var_224_6 = (&data_611558)[eax_17]
    sub_4c84d0(&data_7027c0, 0x613844)
    int32_t ecx_11 = arg3[4]
    int32_t eax_18 = 8
    
    if (ecx_11 s>= 0 && ecx_11 s< 8)
        eax_18 = ecx_11
    
    int32_t var_224_7 = (&data_611558)[eax_18]
    int32_t var_228_2 = (&data_6114f8)[eax_18]
    sub_4c84d0(&var_210, 0x61ab98)
else
    if (data_702fc0 == 0)
        goto label_48f4d7
    
    int32_t esi_1
    
    if (arg4 != 0)
        esi_1 = 8
        
        if (arg5 u<= 7)
            esi_1 = arg5
    else
        esi_1 = 9
    
    int32_t var_224_1 = (&data_611558)[esi_1]
    sub_4c84d0(&data_7027c0, 0x613844)
    int32_t var_224_2 = (&data_6114f8)[esi_1]
    sub_4c84d0(&var_210, 0x61ab40)

if (data_702fc0 == 0)
    goto label_48f4d7

sub_55ef70(&var_210, data_72d6ac, data_719b6c, &data_7027c0, &var_210)
sub_55f1e0(&var_210, data_72d6ac, data_719b6c, &data_7027c0, &var_210)
eax_4 = &var_210
var_234_1 = &var_210
label_48f4ab:
var_238_2 = &data_7027c0
label_48f4bc:
sub_55f390(eax_4, data_72d6ac, data_719b6c, var_238_2, var_234_1)
sub_4a1e40(3)
label_48f4d7:
*arg2 = 1
sub_5f02dd(eax_1 ^ &var_214)
return 0
