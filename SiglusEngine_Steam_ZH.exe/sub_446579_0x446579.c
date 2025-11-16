// 函数: sub_446579
// 地址: 0x446579
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi
int32_t var_10 = 0
int32_t* i_1
int32_t ecx_1
i_1, ecx_1 = sub_44653d(arg1, arg2)
int32_t* i = i_1

if (i == 0)
    return 0x8876086c

int32_t result

do
    int32_t eax = *i
    
    if (eax u> 0xe)
        result = 0x80004005
    else
        switch (eax)
            case 0
                result, ecx_1 = (*(*arg1 + 0x50))(arg1, i[1], i[3], i[2])
            case 1
                result, ecx_1 = (*(*arg1 + 0x58))(arg1, i[1], i[3])
            case 2
                result, ecx_1 = (*(*arg1 + 0x60))(arg1, i[1], i[3], i[2])
            case 3
                result, ecx_1 = (*(*arg1 + 0x68))(arg1, i[1], i[3])
            case 4
                result, ecx_1 = (*(*arg1 + 0x70))(arg1, i[1], i[3], i[2])
            case 5
                int32_t var_10_6 = ecx_1
                result, ecx_1 = (*(*arg1 + 0x78))(arg1, i[1], fconvert.s(fconvert.t(i[3])))
            case 6
                result, ecx_1 = (*(*arg1 + 0x80))(arg1, i[1], i[3], i[2])
            case 7
                result, ecx_1 = (*(*arg1 + 0x88))(arg1, i[1], i[3])
            case 8
                result, ecx_1 = (*(*arg1 + 0x90))(arg1, i[1], i[3], i[2])
            case 9
                result, ecx_1 = (*(*arg1 + 0x98))(arg1, i[1], i[3])
            case 0xa
                result, ecx_1 = (*(*arg1 + 0xa0))(arg1, i[1], i[3], i[2])
            case 0xb
                int32_t eax_13
                
                if (*(i[5] + 4) != 0)
                    int32_t* eax_15 = *(i[5] + 4)
                    eax_13 = (*(*eax_15 + 0xc))(eax_15)
                else
                    eax_13 = 0
                
                result, ecx_1 = (*(*arg1 + 0xc8))(arg1, i[1], eax_13)
            case 0xc
                result, ecx_1 = (*(*arg1 + 0xd0))(arg1, i[1], *(i[5] + 4))
            case 0xd
                result, ecx_1 = (*(*arg1 + 0xd8))(arg1, i[1], *(i[5] + 4))
            case 0xe
                result, ecx_1 = (*(*arg1 + 0xe0))(arg1, i[1], *(i[5] + 4))
    
    if (result s< 0)
        break
    
    i = i[6]
while (i != 0)

return result
