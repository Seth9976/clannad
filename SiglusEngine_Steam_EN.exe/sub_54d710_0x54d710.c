// 函数: sub_54d710
// 地址: 0x54d710
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = data_1321eb8
int32_t esi = 0
int32_t* edi = data_20c2460

if (ecx s<= 0)
    return 

int32_t* ebx_1 = data_1321ec0 + 0x20

do
    int32_t eax = *edi
    
    if (eax != 0xffffffff)
        int32_t ecx_1 = 0
        
        if (data_12dc4bc != 0)
            ecx_1 = 0x1a
            
            if (eax != 0)
                eax = 1
        
        sub_4e8000(eax, *ebx_1, ecx_1 + 0x19, eax, &data_704898)
        ecx = data_1321eb8
    
    esi += 1
    ebx_1 = &ebx_1[0xf]
    edi = &edi[1]
while (esi s< ecx)
