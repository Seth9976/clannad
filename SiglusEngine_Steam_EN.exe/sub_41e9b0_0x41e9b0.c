// 函数: sub_41e9b0
// 地址: 0x41e9b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* edx = &data_f899b8
data_92526c = 0xffffffff
void* ecx = &data_f899ac
void* var_8 = &data_f899b8
int32_t edi = 0
void* var_c = &data_f899ac
void* lpString = &data_9252a0

for (void* i = &data_925270; i s< &data_9265b0; )
    if (*(lpString - 0x30) != 0)
        if (edi u<= 0xf && lpString != 0)
            *lpString = 0
            
            if (*i != 0 && *ecx != 0)
                GetDlgItemTextA(data_7027bc, *((edi << 2) + &data_6105f0), lpString, 0x101)
                ecx = var_c
                edx = var_8
        
        int32_t eax = data_92526c
        
        if (*edx != 0)
            eax = edi
        
        data_92526c = eax
    
    edx += 0x14
    i += 0x134
    ecx += 0x14
    var_8 = edx
    lpString += 0x134
    var_c = ecx
    edi += 1
