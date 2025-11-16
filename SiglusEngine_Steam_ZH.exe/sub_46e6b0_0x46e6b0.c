// 函数: sub_46e6b0
// 地址: 0x46e6b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
int32_t* var_c = arg1
int32_t i = 0
int32_t edi
int32_t var_18 = edi
var_8 = nullptr
var_c = nullptr

if (arg6 == 0)
    arg6 = &var_c

void* arg_4
void* esi = arg_4

if (esi != 0)
    int32_t eax_1 = *(esi + 4)
    int32_t* arg_8
    int32_t result
    
    if (eax_1 == 1)
        int32_t* ebx = arg_8
        result = sub_46e6b0(*(esi + 8), ebx, arg2, arg3, arg4, arg5, arg6, &arg_8)
        
        if (result s< 0)
            return result
        
        result = sub_46e6b0(*(esi + 0xc), &ebx[arg_8], arg2, arg3, arg4, arg5, arg6, &arg_4)
        
        if (result s< 0)
            return result
        
        var_8 = arg_4 + arg_8
    else if (eax_1 == 6)
        result = sub_46e6b0(*(esi + 0x18), arg_8, arg2, arg3, arg4, arg5, arg6, &var_8)
    label_46e737:
        
        if (result s< 0)
            return result
    else if (eax_1 == 8)
        if (arg4 == 0)
            void* eax_13 = esi
            
            while (*(eax_13 + 4) == 8)
                eax_13 = *(eax_13 + 0x10)
                
                if (eax_13 == 0)
                    break
            
            if (eax_13 != 0 && *(eax_13 + 4) == 9 && *(eax_13 + 0x10) == 3)
                arg2 = sub_49f4eb(arg1[2], &data_aac1c4, 0x2d1, 0xffffffff, 4)
                arg4 = 1
        
        if (*(esi + 0x14) u> 0)
            do
                result =
                    sub_46e6b0(*(esi + 0x10), &arg_8[var_8], arg2, arg3, arg4, arg5, arg6, &arg_4)
                
                if (result s< 0)
                    return result
                
                var_8 += arg_4
                i += 1
            while (i u< *(esi + 0x14))
    else
        if (eax_1 == 9)
            if (*(esi + 0x10) == 3)
                if (arg4 != 0)
                    void* eax_12 = *(*(arg1[2] + 0x10) + (arg2 << 2))
                    *(eax_12 + 4) |= 0x80
                else
                    arg2 = sub_49f4eb(arg1[2], &data_aac1c4, 0x2d1, 0xffffffff, 4)
            
            result = sub_46ccb2(arg1, *(esi + 0x10), *(esi + 0x18), *(esi + 0x1c), 
                (*(esi + 0x20)).b, arg_8, arg2, arg6, arg5, &var_8)
            goto label_46e737
        
        if (eax_1 == 0xb)
            result = sub_46f2d5(arg1, *(esi + 0x20), arg_8, arg2, arg3, arg4, arg5, arg6, 
                *(esi + 0x2c), *(esi + 0x30), &var_8)
            goto label_46e737
        
        sub_46e3d1(arg1, nullptr, 0, "internal error: unknown node")

if (arg7 != 0)
    *arg7 = var_8

return 0
