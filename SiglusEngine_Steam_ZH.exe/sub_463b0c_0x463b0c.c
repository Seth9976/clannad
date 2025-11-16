// 函数: sub_463b0c
// 地址: 0x463b0c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg3

if (ebx == 0 || arg1 == 0)
    return 0x88760385

*ebx = 0
int32_t edi
int32_t var_10_1 = edi
sub_4863c7()
int32_t* result
void*** arg_4
int32_t* result_1

if (arg2 == 0)
    result = sub_463860(arg1, arg_4, &arg3)
    
    if (result s>= 0)
        *ebx = arg3
    else
        result_1 = sub_460c06(arg1, arg_4, &arg_4)
    label_463bf5:
        result = result_1
        
        if (result s>= 0)
            int32_t* esi_2 = arg_4
            result = sub_460994(esi_2)
            
            if (result s< 0)
                (*(*esi_2 + 8))(esi_2)
            else
                if (sub_487bbd(esi_2) != 0)
                    result = 0x88760390
                
                if (result s>= 0)
                    *ebx = esi_2
                else
                    (*(*esi_2 + 8))(esi_2)
else if (arg2 == 1)
    result = sub_463975(arg1, arg_4, &arg3)
    
    if (result s< 0)
        result_1 = sub_460d01(arg1, arg_4, &arg_4)
        goto label_463bf5
    
    *ebx = arg3
else if (arg2 == 2)
    result = sub_46378b(*arg1, arg1[1], arg1[2], arg_4, &arg3)
    
    if (result s< 0)
        result_1 = sub_460b30(*arg1, arg1[1], arg1[2], arg_4, &arg_4)
        goto label_463bf5
    
    *ebx = arg3
else if (arg2 == 3)
    result = sub_463719(*arg1, arg1[1], arg_4, &arg3)
    
    if (result s< 0)
        result_1 = sub_460ab8(*arg1, arg1[1], arg_4, &arg_4)
        goto label_463bf5
    
    *ebx = arg3
else
    result = 0x80070057
return result
