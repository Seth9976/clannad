// 函数: sub_580af0
// 地址: 0x580af0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* edi = &data_f8d3d8
int32_t i_1 = 0x40
BOOL result
int32_t i

do
    sub_4d6c40(edi - 0x1c, edi - 0x18)
    sub_4d6c40(edi - 0xc, edi - 8)
    sub_4d6c40(edi, edi + 4)
    result = edi - 0x7c
    __builtin_memset(edi - 0x1c, 0, 0x18)
    *edi = 0
    *(edi + 4) = 0
    sub_4d1c30(result, result, edi - 0x1c, 0x60)
    *(edi - 0x1c) = 0
    *(edi - 0x18) = 0
    
    if (*(edi - 0x78) != 0)
        int32_t eax_2 = *(edi - 0x10) << 5
        sub_4d6960(eax_2, edi - 0x18, edi - 0x1c, eax_2, "MSGST_MESS_COPY")
        result = *(edi - 0x14) << 5
        sub_4d1c30(result, *(edi - 0x78), *(edi - 0x18), result)
    
    *(edi - 0xc) = 0
    *(edi - 8) = 0
    char* ecx_7 = *(edi - 0x68)
    
    if (ecx_7 != 0)
        result.b = *ecx_7
        int32_t edx_7 = 0
        
        while (result.b != 0)
            if (result.b u< 0x80)
                edx_7 += 1
                ecx_7 = &ecx_7[1]
            else if (result.b u< 0xa0)
                if (result.b u>= 0xfe)
                    edx_7 += 1
                    ecx_7 = &ecx_7[1]
                else
                    edx_7 += 2
                    ecx_7 = &ecx_7[2]
            else if (result.b u<= 0xdf || result.b u>= 0xfe)
                edx_7 += 1
                ecx_7 = &ecx_7[1]
            else
                edx_7 += 2
                ecx_7 = &ecx_7[2]
            
            result.b = *ecx_7
        
        result = edx_7 + 1
        BOOL result_1 = result
        
        if (result s> 0)
            result = sub_4d6960(result, edi - 8, edi - 0xc, result, "MSGST_NAME_COPY")
            sub_4d1c30(result, *(edi - 0x68), *(edi - 8), result_1)
    
    int32_t* ecx_10 = edi
    *(edi + 4) = 0
    *ecx_10 = 0
    
    if (*(edi - 0x5c) != 0)
        result = sub_4d6960(result, edi + 4, ecx_10, 0x200, "MSGST_FACE_COPY")
        sub_4d1c30(result, *(edi - 0x5c), *(edi + 4), 0x200)
    
    edi += 0x3920
    i = i_1
    i_1 -= 1
while (i != 1)
sub_4d1c30(result, &data_1af4e90, 0x1b04898, 0xfa08)
return result
