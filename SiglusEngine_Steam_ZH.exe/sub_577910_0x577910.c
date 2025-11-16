// 函数: sub_577910
// 地址: 0x577910
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ebx = arg4
int32_t var_8
int32_t* var_20 = &var_8
var_8 = 0
int32_t var_c = 1
sub_585c30(&arg1[0x52], arg3, arg2, ebx, arg1, &arg1[0x52], &var_8, &var_c)
uint32_t result = sub_575a80(arg3)

if (result.b != 0)
    arg4 = 0
    uint32_t eax_1
    
    if (arg3 s> 0x4b1)
        result = arg3 - 0x4bb
        
        if (result u<= 0xf0)
            result = zx.d(lookup_table_577ae0[result])
            
            switch (result)
                case 0
                    eax_1 = &arg1[0xb88]
                    return sub_585ea0(eax_1, arg3, arg2, ebx, arg5, eax_1, &arg4)
                case 1
                    eax_1 = &arg1[0x921]
                    return sub_585ea0(eax_1, arg3, arg2, ebx, arg5, eax_1, &arg4)
                case 2
                    eax_1 = &arg1[0x520]
                    return sub_585ea0(eax_1, arg3, arg2, ebx, arg5, eax_1, &arg4)
                case 3
                    eax_1 = &arg1[0x6ba]
                    return sub_585ea0(eax_1, arg3, arg2, ebx, arg5, eax_1, &arg4)
                case 4
                    eax_1 = &arg1[0x5ed]
                    return sub_585ea0(eax_1, arg3, arg2, ebx, arg5, eax_1, &arg4)
                case 5
                    eax_1 = &arg1[0x854]
                    return sub_585ea0(eax_1, arg3, arg2, ebx, arg5, eax_1, &arg4)
                case 6
                    eax_1 = &arg1[0x787]
                    return sub_585ea0(eax_1, arg3, arg2, ebx, arg5, eax_1, &arg4)
                case 7
                    eax_1 = &arg1[0x9ee]
                    return sub_585ea0(eax_1, arg3, arg2, ebx, arg5, eax_1, &arg4)
                case 8
                    eax_1 = &arg1[0xabb]
                    return sub_585ea0(eax_1, arg3, arg2, ebx, arg5, eax_1, &arg4)
    else
        switch (arg3)
            case 0xb
                eax_1 = &arg1[0x1ec]
                return sub_585ea0(eax_1, 0xb, arg2, ebx, arg5, eax_1, &arg4)
            case 0x10
                eax_1 = &arg1[0x1ec]
                return sub_585ea0(eax_1, arg3, arg2, ebx, arg5, eax_1, &arg4)
            case 0x15
                eax_1 = &arg1[0x2b9]
                return sub_585ea0(eax_1, 0x15, arg2, ebx, arg5, eax_1, &arg4)
            case 0x3fd
                eax_1 = &arg1[0xc55]
                return sub_585ea0(eax_1, 0x3fd, arg2, ebx, arg5, eax_1, &arg4)
            case 0x47f
                eax_1 = &arg1[0x453]
                return sub_585ea0(eax_1, arg3, arg2, ebx, arg5, eax_1, &arg4)
            case 0x4b1
                eax_1 = &arg1[0x386]
                return sub_585ea0(eax_1, 0x4b1, arg2, ebx, arg5, eax_1, &arg4)

return result
