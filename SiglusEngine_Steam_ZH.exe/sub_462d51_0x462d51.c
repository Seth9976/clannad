// 函数: sub_462d51
// 地址: 0x462d51
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi
*arg1 = &data_ac3b8c
sub_462e55(arg1)
sub_481ef5(&arg1[0xc])
CloseHandle(arg1[0xf])
void* edi_1 = arg1[0x12]

if (edi_1 != 0)
    _free(*(edi_1 + 0xc))
    j__free(edi_1)

void* edi_2 = arg1[0x13]

if (edi_2 != 0)
    _free(*(edi_2 + 0xc))
    j__free(edi_2)

int32_t* eax = arg1[0x14]
int32_t i = 0

if (eax != 0)
    if (*eax u> 0)
        do
            DeleteFileA(*(arg1[0x14][3] + (i << 2)))
            _free(*(arg1[0x14][3] + (i << 2)))
            i += 1
        while (i u< *arg1[0x14])
    
    void* edi_3 = arg1[0x14]
    
    if (edi_3 != 0)
        _free(*(edi_3 + 0xc))
        j__free(edi_3)

void* edi_4 = arg1[0x15]

if (edi_4 != 0)
    _free(*(edi_4 + 0xc))
    j__free(edi_4)

if (arg1[0x17].b == 0)
    if (arg1[0x11] == 1)
        sub_48318d(arg1[0xb])
else if (arg1[0x11] == 1)
    sub_4832dc(arg1[0xb])

j__free(arg1[0xb])
int32_t* eax_6 = arg1[2]
(*(*eax_6 + 8))(eax_6)
sub_481fc7(&arg1[0xc])
sub_4844bc(&arg1[7])
return sub_460924(&arg1[3]) __tailcall
