// 函数: sub_431960
// 地址: 0x431960
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* eax = &arg1[0xf]

if (arg1[0x4e] == 5)
    int32_t* ecx = arg1[0x4f]
    
    if (ecx != 0)
        if (ecx == 1)
            arg1[0x4f] = 2
            int32_t eax_1 = sub_41d6d0(eax, eax, &arg1[0x4e], ecx)
            arg1[0xe] += 1
            return eax_1
        
        int32_t eax_2 = data_1392710
        arg1[0x55] = 0
        arg1[0x4f] = 0
        arg1[0x54] = eax_2
        return eax_2
    
    int32_t i = arg1[0x55] - arg1[0x54] + data_1392710
    
    if (i s>= arg1[0x56])
        do
            void* var_10_2 = eax
            sub_41d740(eax, *arg1, ecx, &arg1[0x4e])
            i -= arg1[0x56]
            eax = &arg1[0xf]
        while (i s>= arg1[0x56])
        
        eax = data_1392710
        arg1[0x55] = i
        arg1[0x54] = eax

return eax
