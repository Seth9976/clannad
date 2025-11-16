// 函数: sub_72da40
// 地址: 0x72da40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg2
int32_t* ebx = arg3[4]
char* edi = *arg3
int32_t esi = arg3[1]
int32_t result = arg4
int32_t result_1 = result

if (ebx[0x65] != 0)
label_72dafe:
    
    if (arg5 s> result)
        if (*(ebx[0x6c] + 0x24) == 0)
            *(*ebx + 0x14) = 0x78
            (*(*ebx + 4))(ebx, 0xffffffff)
            arg2 = var_8
            *(ebx[0x6c] + 0x24) = 1
        
        result = 0x19
        arg2 <<= 0x19 - result_1.b
else if (result s< 0x19)
    while (true)
        if (esi == 0)
            if ((*(ebx[6] + 0xc))(ebx) == 0)
                return 0
            
            int32_t* esi_1 = ebx[6]
            arg2 = var_8
            edi = *esi_1
            esi = esi_1[1]
        
        uint32_t eax_6 = zx.d(*edi)
        esi -= 1
        edi = &edi[1]
        
        if (eax_6 == 0xff)
            uint32_t i
            
            do
                if (esi == 0)
                    if ((*(ebx[6] + 0xc))(ebx) == 0)
                        return 0
                    
                    char** esi_2 = ebx[6]
                    edi = *esi_2
                    esi = esi_2[1]
                
                i = zx.d(*edi)
                esi -= 1
                edi = &edi[1]
            while (i == 0xff)
            
            arg2 = var_8
            
            if (i != 0)
                ebx[0x65] = i
                result = result_1
                break
            
            eax_6 = 0xff
        
        arg2 = arg2 << 8 | eax_6
        result = result_1 + 8
        var_8 = arg2
        result_1 = result
        
        if (result s>= 0x19)
            goto label_72db44
    
    goto label_72dafe

label_72db44:
*arg3 = edi
arg3[1] = esi
arg3[3] = result
result.b = 1
arg3[2] = arg2
return result
