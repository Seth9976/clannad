// 函数: sub_462870
// 地址: 0x462870
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* ebx = arg2
void* edi = arg3

if (edi s> ebx)
    arg1 = edi
    edi = ebx
    ebx = arg1

if (edi u<= 0x2bd && ebx u<= 0x2bd)
    void* eax
    
    if (arg4 == 0 || data_187a5c0 == 0)
        eax = nullptr
    else
        eax = &data_1606c30
    
    if (arg5 == 0 || data_139319c == 0)
        arg1 = nullptr
    else
        arg1 = &data_13932a0
    
    void* var_c_1 = arg1
    void* i_1 = ebx - edi + 1
    
    if (i_1 s> 0)
        void* esi_2 = edi * 0x21
        void* i
        
        do
            if (edi s< 0x2be)
                if (esi_2 != 0xff8efbe8)
                    sub_4cfdf0(arg1, esi_2 + &data_710418, esi_2 + 0x983420, data_108f650)
                else
                    sub_4d1ba0(arg1, 0x21, esi_2 + 0x983420, (esi_2 + &data_710418).b)
            
            if (eax != 0)
                sub_4627f0(eax + 0x16d8, esi_2 + &data_710418, edi, eax + 0x16d8)
            
            arg1 = var_c_1
            
            if (arg1 != 0)
                arg1 = sub_4627f0(arg1 + 0x16d8, esi_2 + &data_710418, edi, arg1 + 0x16d8)
            
            edi += 1
            esi_2 += 0x21
            i = i_1
            i_1 -= 1
        while (i != 1)
else if (data_702fc0 != 0)
    sub_55f390(
        sub_55f1e0(sub_55ef70(arg1, data_72d6ac, data_719b6c, 0x619bf4, 0x616b0c), data_72d6ac, 
            data_719b6c, 0x619bf4, 0x616b0c), 
        data_72d6ac, data_719b6c, 0x619bf4, 0x616b0c)
    sub_4a1e40(3)
