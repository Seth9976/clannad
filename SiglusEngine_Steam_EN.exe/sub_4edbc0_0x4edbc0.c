// 函数: sub_4edbc0
// 地址: 0x4edbc0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

arg1 = *arg3

if (arg1 u< 0x80 || (arg1 u>= 0xa0 && arg1 u<= 0xdf) || arg1 u>= 0xfe
        || (zx.d(arg1) << 8 | zx.d(arg3[1])) != 0x8179)
    if (arg2 != 0)
        *arg2 = arg3
    
    return 0

int32_t* edx = arg7
int32_t eax_1 = 0
void* ecx_2
ecx_2.b = 0
int32_t var_10 = 0
void* esi_1 = &arg3[2]
char var_11 = 0
int32_t result = 0

if (arg5 == 0 || arg6 == 0 || edx == 0)
    ecx_2:1.b = 0
else
    ecx_2:1.b = 1

char* ebx = arg4
char var_12 = ecx_2:1.b

while (true)
    ecx_2.b = *esi_1
    
    if (ecx_2.b u>= 0x80 && (ecx_2.b u< 0xa0 || ecx_2.b u> 0xdf) && ecx_2.b u< 0xfe)
        uint32_t edx_1
        
        if (ecx_2.b u< 0xa0 || ecx_2.b u> 0xdf)
            edx_1 = zx.d(ecx_2.b) << 8 | zx.d(*(esi_1 + 1))
            eax_1 = var_10
        else
            edx_1 = 0
        
        if (eax_1 == 0 && edx_1 == 0x817a)
            esi_1 += 2
            break
        
        edx = arg7
        
        if (result s>= 0x7e)
            ecx_2.b = 1
            esi_1 += 2
            var_11 = 1
            result += 2
            continue
        else
            *ebx = ecx_2.b
            eax_1.b = *(esi_1 + 1)
            esi_1 += 2
            ebx[1] = eax_1.b
            ebx = &ebx[2]
            eax_1 = var_10
            result += 2
            continue
    
    char* var_34_1
    HWND eax_8
    
    if (ecx_2.b == 0)
        if (data_702fc0 == 0)
            break
        
        eax_8 = sub_55f1e0(sub_55ef70(eax_1, data_72d6ac, data_719b6c, 0x61e9ec, &data_61e9d4), 
            data_72d6ac, data_719b6c, 0x61e9ec, &data_61e9d4)
        var_34_1 = &data_61e9d4
    else if (ecx_2.b == 0xa)
        if (data_702fc0 == 0)
            break
        
        eax_8 = sub_55f1e0(sub_55ef70(eax_1, data_72d6ac, data_719b6c, 0x61e9ec, &data_61e9fc), 
            data_72d6ac, data_719b6c, 0x61e9ec, &data_61e9fc)
        var_34_1 = &data_61e9fc
    else if (ecx_2.b != 0x22)
        if (eax_1 == 0)
            if (ecx_2.b == 0x40)
                if (ecx_2:1.b != 0)
                    ecx_2 = arg6
                    arg6 += 4
                    *ecx_2 = zx.d(*(esi_1 + 1))
                    ecx_2:1.b = var_12
                    *edx = 0
                    edx = &edx[1]
                    arg7 = edx
                    *arg5 += 1
                    eax_1 = var_10
                
                esi_1 += 3
                continue
            else if (ecx_2.b == 0x21)
                if (ecx_2:1.b != 0)
                    uint32_t* ecx_3 = arg6
                    *ecx_3 = zx.d(*(esi_1 + 1))
                    *edx = 1
                    edx = &edx[1]
                    arg6 = &ecx_3[1]
                    ecx_2:1.b = var_12
                    *arg5 += 1
                    eax_1 = var_10
                    arg7 = edx
                
                esi_1 += 3
                continue
        
        esi_1 += 1
        
        if (result s>= 0x7f)
            var_11 = 1
            result += 1
            continue
        else
            *ebx = ecx_2.b
            ebx = &ebx[1]
            result += 1
            continue
    else
        esi_1 += 1
        eax_1 ^= 1
        var_10 = eax_1
        continue
    
    sub_55f390(eax_8, data_72d6ac, data_719b6c, 0x61e9ec, var_34_1)
    eax_1, ecx_2 = sub_4a1e40(3)
    break

ecx_2.b = var_11
*ebx = 0

if (ecx_2.b != 0 && data_702fc0 != 0)
    sub_55f390(
        sub_55f1e0(sub_55ef70(eax_1, data_72d6ac, data_719b6c, 0x61e9ec, 0x61ea30), data_72d6ac, 
            data_719b6c, 0x61e9ec, 0x61ea30), 
        data_72d6ac, data_719b6c, 0x61e9ec, 0x61ea30)
    sub_4a1e40(3)

if (arg2 != 0)
    *arg2 = esi_1

return result
