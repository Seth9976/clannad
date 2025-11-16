// 函数: sub_71d5c0
// 地址: 0x71d5c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = *arg1

if (eax != 0)
    _fclose(eax)

arg1[0xf] = arg1[0xe]
arg1[0x13] = arg1[0x12]
*arg1 = 0
arg1[2] = 0
arg1[0x15] = 0xffffffff
__wfopen_s(arg1, arg2, &data_af335c)
int32_t* ecx = *arg1

if (ecx != 0)
    arg1[1] = arg3
    
    if (arg3 != 0)
        sub_749feb(ecx, arg3, nullptr, FILE_BEGIN)
    
    if (_fread(&arg1[3], 1, 0x2c, *arg1) == 0x2c)
        if (arg1[5] != 0xffffffff)
            sub_55c6f0(&arg1[0xe], arg1[7])
            
            if (_fread(arg1[0xe], 1, arg1[7] << 2, *arg1) != arg1[7] << 2)
                sub_71d6d0(arg1)
                int32_t eax_15
                eax_15.b = 0
                return eax_15
        else
            arg1[0xf] = arg1[0xe]
        
        arg1[0x11] = zx.d(*(arg1 + 0xe)) u>> 3
        uint32_t eax_11
        eax_11.b = 1
        return eax_11
    
    int32_t* eax_7 = *arg1
    
    if (eax_7 != 0)
        _fclose(eax_7)
    
    arg1[0xf] = arg1[0xe]
    arg1[0x13] = arg1[0x12]
    *arg1 = 0
    arg1[2] = 0
    arg1[0x15] = 0xffffffff

int32_t eax_3
eax_3.b = 0
return eax_3
