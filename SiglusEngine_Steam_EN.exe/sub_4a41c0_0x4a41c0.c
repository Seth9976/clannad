// 函数: sub_4a41c0
// 地址: 0x4a41c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_414
char* result = __security_cookie ^ &var_414
char* result_1 = result

if (data_702fc0 != 0)
    int32_t edi_1 = data_1af173c
    
    if (edi_1 s< 8)
        char text[0x404]
        
        if (arg3 == 0xa)
            int32_t eax_5
            int32_t edx
            edx:eax_5 = sx.q(arg2)
            int32_t var_424_3 = arg2
            int32_t var_428_1 = (eax_5 - edx) s>> 1
            result = sub_4c84d0(&text, 0x61b9b4)
        else if (arg3 == 0xc)
            int32_t var_424_2 = arg2
            result = sub_4c84d0(&text, 0x61b9e4)
        else
            result = arg3 - 0x12
            
            if (arg3 == 0x12)
                int32_t var_424_1 = arg2
                result = sub_4c84d0(&text, 0x61ba0c)
        
        if (edi_1 s< 4)
            result = MessageBoxA(data_7027bc, &text, 0x61ba34, MB_OK)
            edi_1 = data_1af173c
        
        if (arg3 == 0xa)
            int32_t eax_9
            int32_t edx_1
            edx_1:eax_9 = sx.q(arg2)
            int32_t var_424_6 = arg2
            int32_t var_428_3 = (eax_9 - edx_1) s>> 1
            sub_4c84d0(&data_7027c0, 0x61ba54)
            int32_t var_434_1 = arg4
            result = sub_4c84d0(&text, 0x61ba90)
        else
            void* const var_428_2
            
            if (arg3 == 0xc)
                int32_t var_424_5 = arg2
                var_428_2 = &data_61bad4
            label_4a4298:
                sub_4c84d0(&data_7027c0, var_428_2)
                int32_t var_430_3 = arg4
                result = sub_4c84d0(&text, &data_61bb04)
            else if (arg3 == 0x12)
                int32_t var_424_4 = arg2
                var_428_2 = &data_61bb38
                goto label_4a4298
        
        if (data_702fc0 != 0)
            sub_55ef70(&text, data_72d6ac, data_719b6c, &data_7027c0, &text)
            sub_55f1e0(&text, data_72d6ac, data_719b6c, &data_7027c0, &text)
            sub_55f390(&text, data_72d6ac, data_719b6c, &data_7027c0, &text)
            result = sub_4a1e40(3)
            edi_1 = data_1af173c
    
    data_1af173c = edi_1 + 1

sub_5f02dd(result_1 ^ &var_414)
return result
