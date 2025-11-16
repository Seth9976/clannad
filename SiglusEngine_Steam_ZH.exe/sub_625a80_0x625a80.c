// 函数: sub_625a80
// 地址: 0x625a80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg3
int32_t* result = arg6
int32_t* ebx = arg3
int32_t ecx = arg5
int32_t var_8_1 = arg2
int32_t* edi = arg4

if (ebx != arg2)
    if (edi != ecx)
        while (true)
            if (arg7(edi, ebx) == 0)
                arg2 = var_8_1
                *result = *ebx
                int32_t eax_9 = ebx[1]
                ebx = &ebx[2]
                result[1] = eax_9
                result = &result[2]
                
                if (ebx == arg2)
                    ecx = arg5
                    break
            else
                ecx = arg5
                *result = *edi
                int32_t eax_2 = edi[1]
                edi = &edi[2]
                result[1] = eax_2
                result = &result[2]
                
                if (edi == ecx)
                    arg2 = var_8_1
                    break
    
    if (ebx != arg2)
        int32_t* ebx_1 = ebx
        
        do
            *result = *ebx_1
            int32_t eax_4 = ebx_1[1]
            ebx_1 = &ebx_1[2]
            result[1] = eax_4
            result = &result[2]
        while (ebx_1 != arg2)

while (edi != ecx)
    *result = *edi
    int32_t eax_6 = edi[1]
    edi = &edi[2]
    result[1] = eax_6
    result = &result[2]

return result
