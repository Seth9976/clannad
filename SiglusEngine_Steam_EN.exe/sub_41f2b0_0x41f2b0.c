// 函数: sub_41f2b0
// 地址: 0x41f2b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = 0xffffffff
int32_t var_8 = 0
int32_t edx = 0
int32_t var_c = 0
int32_t edi = 0xffffffff

if (data_1357024 s<= 0)
    return 0xffffffff

int32_t* ecx = &data_1357040
int32_t eax_2

while (true)
    if (ecx[-4] != 0 && ecx[-1] s> 0)
        int32_t eax_1 = *ecx
        
        if (eax_1 s> 0)
            if (eax_1 == arg1)
                eax_2 = edx
                
                if (edx != 0xffffffff)
                    return eax_2
                
                break
            
            if (eax_1 s>= arg1)
                if (eax_1 s> arg1 && (edi == 0xffffffff || var_c s> eax_1))
                    var_c = eax_1
                    edi = edx
            else if (esi == 0xffffffff)
                esi = edx
                var_8 = eax_1
            else if (var_8 s< eax_1)
                esi = edx
                var_8 = eax_1
    
    edx += 1
    ecx = &ecx[6]
    
    if (edx s>= data_1357024)
        eax_2 = 0xffffffff
        break

if (esi != 0xffffffff)
    return esi

if (edi != 0xffffffff)
    return edi

return eax_2
