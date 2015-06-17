#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <regex>
#include <assert.h>

std::string music_high= "bd2[K],g2[M],#f2[LM],a1[K],e2[M],#f2[LM];b1[K],#c2[L],d2[L],#f1[K],e1[L],#f1[L];g1[K],g1[M],b1[M],c2[M],#c2[M],d2[K],g2[M],#f2[M],e2[M],d2[M];b1[K],b1[M],#c2[M],d2[M],#c2[M],#c2[K],#c2[M],d2[M],e2[M],d2[M];d2[K],(e2.g2)[M],#f2[LM],a1[K],e2[M],#f2[LM];b1[K],#c2[M],d1[M],d2[L],#f1[K],e1[L],#f1[L];g1[K],g1[M],b1[M],c2[M],#c2[M],d2[K],g2[M],#f2[M],e2[M],d2[M];b1[K],b1[M],#c2[M],d2[M],#c2[M],#c2[K],#c2[M],d2[M],e2[M],d2[M];#f2[J],e2[LM],5<e2[N],d2[N]>,#c2[K];d2[K],d2[M],e2[L],d2[M],#c2[KL],d1[L];b1[K],b1[M],a1[L],g1[M],a1[L],d2[L],#f1[LM],d1[M];b1[K],b1[M],a1[L],g1[M],#c2[K],d2[L],e2[L];#f2[K],#f2[M],g2[L],#f2[M],e2[J];d2[K],d2[M],e2[L],d2[M],#c2[L],#f2[L],a2[K];b2[L],a2[L],g2[L],b2[L],a2[L],g2[L],(d2.#f2)[L],a2[L];b2[L],a2[L],g2[L],b2[L],(e2@a2@#c3)[J];d2[L],#c2[L],d2[L],#f1[L],a1[K],b1[L],#c2[L];d2[L],#c2[L],d2[L],#f2[L],a2[M],b2[M],a2[M],b2[M],a2[K];g2[L],(#f2~g2~#f2)[L],e2[L],g2[L],#f2[M],e2[M],d2[M],b1[M],a1[K];b1[L],a1[L],g1[L],d2[L],(#c2~d2~#c2)[L],a1[M],e1[M],d1[M],#c1[LM];d2[L],#c2[L],d2[L],#f1[L],a1[K],b1[L],#c2[L];d2[M],#f2[M],b2[M],d3[M],#f3[M],d3[M],b2[M],#f2[M],b2[LM],5<a2[N],b2[N]>,a2[K];g2[L],(#f2~g2~#f2)[L],e2[L],g2[L],#f2[L],a2[L],d3[L],#f3[L];g3[M],#f3[M],e3[M],d3[M],#c3[M],b2[M],a2[M],g2[M],#c3[M],b2[M],a2[M],g2[M],#f2[M],e2[M],a1[L];3<(e1~a~#c1~e1~a1~#c2~e2)[K],a2[N],e2[N],#c2[N],a1[N],e1[M],V,#c3[N],a2[N],e2[N],#c2[N],a2[N],e2[N],#c2[N],a1[N]>,T;a2[L],#f2[M],g2[M],a2[L],#f2[M],g2[M],a2[M],a1[M],b1[M],#c2[M],d2[M],e2[M],#f2[M],g2[M];#f2[L],d2[M],e2[M],#f2[L],#f1[M],g1[M],a1[M],b1[M],a1[M],g1[M],a1[M],d2[M],#c2[M],d2[M];g1[L],b1[M],a1[M],g1[L],#f1[M],e1[M],#f1[M],e1[M],d1[M],e1[M],#f1[M],g1[M],a1[M],b1[M];g1[L],b1[M],a1[M],b1[L],#c2[M],d2[M],a1[M],b1[M],#c2[M],d2[M],e2[M],#f2[M],g2[M],a2[M];#f2[L],d2[M],e2[M],#f2[L],e2[M],d2[M],e2[M],#c2[M],d2[M],e2[M],(e2~#f2~e2)[L],d2[M],#c2[M];d2[L],b1[M],#c2[M],d2[L],d1[M],e1[M],#f1[M],g1[M],#f1[M],e1[M],a1[M],d2[M],#c2[M],d2[M];b1[L],d2[M],#c2[M],b1[L],a1[M],g1[M],a1[M],g1[M],#f1[M],g1[M],a1[M],b1[M],#c2[M],d2[M];b1[L],d2[M],#c2[M],d2[L],#c2[M],d2[M],#c2[M],d2[M],e2[M],d2[M],#c2[M],d2[M],b1[M],#c2[M];d2[J];5<>;";

std::string music_low = "d[L],(a.d1)[KL],A-1[L],(e.a)[KL];B-1[L],(#f.b)[KL],#F-1[L],(#c.#f)[KL];G-1[L],(d.g)[KL],d[L],(a.d1)[KL];G-1[L],(d.g)[KL],A-1[L],(e.a)[KL];d[L],(a.d1)[M],(a.d1)[M],(a.d1)[L],(a.d1)[L],A-1[L],(e.a)[M],(e.a)[M],(e.a)[L],(e.a)[L];B-1[L],(#f.b)[M],(#f.b)[M],(#f.b)[L],(#f.b)[L],#F-1[L],(#c.#f)[M],(#c.#f)[M],(#c.#f)[M],(#c.#f)[L],(#c.#f)[M];G-1[L],(d.g)[M],(d.g)[M],(d.g)[L],(d.g)[L],d[L],(a.d1)[M],(a.d1)[M],(a.d1)[L],(a.d1)[L];G-1[L],(d.g)[M],(d.g)[M],(d.g)[L],(d.g)[L],A-1[L],(e.a)[M],(e.a)[M],(e.a)[L],(e.a)[L];d[L],a[L],#f1[L],d1[L],A-1[L],e[L],#c1[L],a[L];B-1[L],#f[L],d1[L],b[L],#F-1[L],#c[L],a[L],#f[L];G-1[L],d[L],b[L],g[L],d[L],a[L],d1[L],a[L];G-1[L],d[L],b[L],g[L],A-1[L],e[L],#c1[L],a[L];d[L],a[L],#f1[L],d1[L],A-1[L],e[L],#c1[L],a[L];B-1[L],#f[L],d1[L],b[L],#F-1[L],#c[L],a[L],#f[L];G-1[L],d[L],b[L],g[L],d[L],a[L],d1[L],a[L];G-1[L],d[L],b[L],g[L],a[K],#c1[K];d[L],d1[L],d[L],d1[L],A-1[L],a[L],A-1[L],a[L];B-1[L],b[L],B-1[L],b[L],#F-1[L],#f[L],#F-1[L],#f[L];G-1[L],g[L],G-1[L],g[L],d[L],d1[L],d[L],d1[L];G-1[L],g[L],G-1[L],g[L],A-1[L],a[L],A-1[L],a[L];d[L],d1[L],d[L],d1[L],A-1[L],a[L],A-1[L],a[L];B-1[L],b[L],B-1[L],b[L],#F-1[L],#f[L],#F-1[L],#f[L];G-1[L],g[L],G-1[L],g[L],d[L],d1[L],d[L],d1[L];g[K],T,a[K],T;A-1[M],a[M],U,U,(a1~#c2~e2)[L],U,(V~e2~#c2)[L],a1[K];d[L],a[L],#f1[L],d1[L],A-1[L],e[L],#c1[L],a[L];B-1[L],#f[L],d1[L],b[L],#F-1[L],#c[L],a[L],#f[L];G-1[L],d[L],b[L],g[L],d[L],a[L],d1[L],a[L];G-1[L],d[L],b[L],g[L],A-1[L],e[L],#c1[L],a[L];d[L],a[L],#f1[L],d1[L],A-1[L],e[L],#c1[L],a[L];B-1[L],#f[L],d1[L],b[L],#F-1[L],#c[L],a[L],#f[L];G-1[L],d[L],b[L],g[L],d[L],a[L],d1[L],a[L];G-1[L],d[L],b[L],g[L],A-1[L],e[L],#c1[L],a[L];(#f.a.d1)[J];";

class CBaseNote {
public:
	enum eNoteType {
		StopMark = 1,	// 休止符
		Simple = 2,		// 简单播放
		Chord = 4,		// 和弦
		Arpeggio = 8,	// 琶音
		Legato = 16,	// 连音
		Staccato = 32,	// 断音
        Wave = 64,     // 波音
        Trill = 128,    //颤音
        Echo = 256,     //回音
        LAppoggiatura = 512, //长倚音
        SAppoggiatura = 1024, //短倚音
	};

	struct tNoteItem {
		tNoteItem(int offset, int msecs, const std::string& n){
			nTimeOffset = offset;
			nMsecs = msecs;
			note = n;
		}
		int nTimeOffset;
		int nMsecs;
		std::string note;
	};
private:
	eNoteType m_type;
	std::vector<tNoteItem*> m_vecNotes;
	int m_nPlayTime;
	void DoDestroy(){
		for(auto item : m_vecNotes)
			delete item;
		m_vecNotes.clear();
	}
public:
	CBaseNote(eNoteType type, int nPlayTime)  {
		m_type = type;
		m_nPlayTime = nPlayTime;
	}

	~CBaseNote() { DoDestroy(); }	

	void play(float fRate) {}

	void addNote(int offset, int msecs, const std::string& note){
		tNoteItem* p = new tNoteItem(offset, msecs, note);
		if (p){
			m_vecNotes.push_back(p);
		}else{
			assert(FALSE);
		}
	}

	int getType() { return m_type; }
	int getPlayTime() { return m_nPlayTime; }

	friend std::ostream & operator <<(std::ostream& os, const CBaseNote* p){
		return os << *p;
	}

	friend std::ostream & operator <<(std::ostream& os, const CBaseNote& t1){
		os << "CBaseNote:" << static_cast<const void*>(&t1) << " notes:" <<t1.m_vecNotes.size() << std::endl;
		for(auto n : t1.m_vecNotes){
			os << "\t\t" << n->note << " time: " << n->nMsecs << std::endl;
		}
		return os;
	}
};

class CMusicNote {
public:
	enum eSecType {
		None = 0,
		LongPress = 2,		// 长按：如果该音所占拍数大于基础拍数（乐谱中出现最多的拍数），则程序自动判断为长条，之后可能改为由乐谱标识
		Craze = 3,			// 狂戳标记：黑块上标有剩余音符数目
        Accent = 4,         // 双按即重音：一行中出现两个黑块，且两个黑块不相邻，两个黑块播放同一个音，第一个音量较小，第二个音量较大
		DoubleBlack = 5,	// 双黑：一行中出现两个黑块，且两个黑块不相邻，一般为两个较为急促的音组成
        Accompaniment = 6,  // 伴奏： 
        StopMark = 1024,    //休止符
	};


private:
	eSecType m_type = None;
	std::vector<CBaseNote*> m_TrebleNotes;
	std::vector<CBaseNote*> m_BackingNotes;
	int m_nBackingOffsetTimes;
	void DoDestroy() {
		for(auto item : m_TrebleNotes)
			delete item;
		for(auto item : m_BackingNotes)
			delete item;
		m_TrebleNotes.clear();
		m_BackingNotes.clear();
	}
public:
	CMusicNote() {}
	~CMusicNote() { DoDestroy(); }
	void setType(eSecType type) { m_type = type; }
	eSecType getType() { return m_type; }
	void setBackingOffsetTimes(int offset) { m_nBackingOffsetTimes = offset; }
	void addTrebleNote(CBaseNote* note) { m_TrebleNotes.push_back(note); }
	void addBackingNote(CBaseNote* note) { m_BackingNotes.push_back(note); }
	void addBackingNotes(std::vector<CBaseNote*>& note) { std::copy(note.begin(), note.end(), std::back_inserter(m_BackingNotes)); }

	friend inline std::ostream & operator << (std::ostream& os, const CMusicNote* t1){
		int idx = 0;
		os << "trace CMusicNote: treble:" << t1->m_TrebleNotes.size() 
			<< ",backing:" << t1->m_BackingNotes.size()  
			<< ",backingOffset:" << t1->m_nBackingOffsetTimes << std::endl;
		os << "treble start:" << std::endl;
		for(auto n : t1->m_TrebleNotes){
			os << std::setw(n->getPlayTime()) << n->getPlayTime() << "|";
		}
		os << std::endl;
		for(auto n : t1->m_BackingNotes){
			os << std::setw(n->getPlayTime()) << n->getPlayTime() << "|";
		}
		std::cout << " backing end" << std::endl << "CMusicNote end ***" <<std::endl << std::endl;
		return os;
	}


};


class CMusicSong {
private:
	int m_bpm;
	std::vector<CMusicNote*> m_MusicNotes;
	
	void DoDetroy(){
		for(auto item : m_MusicNotes){
			delete item;
		}
		m_MusicNotes.clear();
	}
public:
	CMusicSong() {}
	~CMusicSong() { DoDetroy(); }

	void addMusicNote(CMusicNote* pMusicNote) { m_MusicNotes.push_back(pMusicNote); }
};

inline std::ostream & operator << (std::ostream& os, const std::vector<CBaseNote*>& t1){
	int idx = 0;
	os << "trace std::vector<CBaseNote*>" << std::endl;
	for(auto n : t1){
		os << "\t" << idx++ << ": " << n;
	}
	std::cout << std::endl;
	return os;
}


inline std::ostream & operator << (std::ostream& os, const std::smatch& t1){
	int idx = 0;
	os << "trace std::smatch" << std::endl;
	for(auto n : t1){
		os << "\t" << idx++ << ": " << n;
	}
	std::cout << std::endl;
	return os;
}

class CSongParser {
public:
	struct tMarkItem {
		tMarkItem(CMusicNote::eSecType t, int start, int end){
			type = t;
			nStartIndex = start;
			nEndIndex = end;
		}
		void setLast(int end) { nEndIndex = end; }
		int getStartIndex() { return nStartIndex; }
		int getEndIndex() { return nEndIndex; }
		CMusicNote::eSecType type;
		int nStartIndex;
		int nEndIndex;
		
		friend inline std::ostream & operator << (std::ostream& os, const tMarkItem& t1){
			int idx = 0;
			os << "trace tMarkItem" << std::endl;
			os << "\t" << t1.type << "," << t1.nStartIndex << "," << t1.nEndIndex;
			std::cout << std::endl;
			return os;
		}
		
	};

public:
	CSongParser() {}

	int getFlagTime(const std::string& str)
	{
		static struct {
			char	m_mark;
			int		m_time;
		} s_TimeInfo[] = {
			{ 'H', 256 },{ 'I', 128 },{ 'J', 64 },{ 'K', 32 },
			{ 'L', 16 },{ 'M', 8 },{ 'N', 4 },{ 'O', 2 }, { 'P', 1 },
			{ 'Q', 256},{ 'R', 128},{ 'S', 64 },{ 'T', 32 },
			{ 'U', 16 },{ 'V', 8 },{ 'W', 4 },{ 'X', 2 }, { 'Y', 1 }, {0,0}
		};
		int nTime = 0;
		for (auto c : str){
			for (int i = 0; s_TimeInfo[i].m_mark != 0; i++){
				if (s_TimeInfo[i].m_mark == c){
					nTime += s_TimeInfo[i].m_time;
					break;
				}			
			}
		}
		return nTime;
	}

	CMusicNote::eSecType getSecType(const std::string& str){
		static struct {
			char mark;
			CMusicNote::eSecType type;
		} s_SecType[] = {
			{'1', CMusicNote::eSecType::None},
			{'2', CMusicNote::eSecType::LongPress},
			{'3', CMusicNote::eSecType::Craze},
			{'4', CMusicNote::eSecType::Accent},
			{'5', CMusicNote::eSecType::DoubleBlack},
			{'6', CMusicNote::eSecType::Accompaniment},
			{0, CMusicNote::eSecType::None}
		};
		CMusicNote::eSecType ret = CMusicNote::eSecType::None;
		if (str.size() != 1){
			return ret;
		}
		
		int i = 0;
		while(s_SecType[i].mark != 0){
			if (s_SecType[i].mark == str.at(0)){
				ret = s_SecType[i].type;
				break;
			}
			++i;
		}
		return ret;
	}
	
	CBaseNote* parse_stop_note(const std::string& note){
		std::string s = note;
		std::smatch m;
		try{
			std::regex re_note_stop("([QRSTUVWXY]+)", std::regex_constants::egrep| std::regex_constants::icase);
			
			if (std::regex_match(s,m,re_note_stop)){
				if (m[1].length() == 0) return NULL;
				int time = getFlagTime(m[1].str());
				CBaseNote* note = new CBaseNote(CBaseNote::eNoteType::StopMark, time);
				if (!note) return NULL;
				note->addNote(0, time, std::string(""));
				return note;
			}
		}catch(std::regex_error& e){
			std::cerr << "error: " << e.what() << std::endl;
		}
		return NULL;
	}
	
	CBaseNote* parse_normal_note(const std::string& note){
		std::string s = note;
		std::smatch m;
		try{
			std::regex re_note_normal("([a-zA-Z0-9#\\-]+)\\[([H-P]+)]", std::regex_constants::egrep | std::regex_constants::icase);
			if (std::regex_match(s,m,re_note_normal)){
				// error: no time found
				if (m[1].length() == 0 || m[2].length() == 0)
					return NULL;
				int time = getFlagTime(m[2].str());
				CBaseNote* note = new CBaseNote(CBaseNote::eNoteType::Simple, time);
				if (!note) return NULL;
				note->addNote(0, time, m[1].str());
				return note;
			}
		}catch(std::regex_error& e){
			std::cerr << "error: " << e.what() << std::endl;
		}
		return NULL;
	}
	
	CBaseNote* parse_combine_note(const std::string& note){
		std::string s = note;
		std::smatch m;
		try{
			std::regex re_note_cmb("\\(([a-zA-Z0-9\\-\\.~#@^$&%!]+)\\)\\[([HIJKLMNOP]+)]", std::regex_constants::extended | std::regex_constants::icase);
			std::regex re_note_split("([^~@^$&%!]+)([~@^$&%!]*)", std::regex_constants::extended | std::regex_constants::icase);
			if (std::regex_match(s,m,re_note_cmb)){
				// error: no time found
				if (m[1].length() == 0 || m[2].length() == 0){
					return NULL;
				}
				int time = getFlagTime(m[2].str());
				std::vector<std::string> tmp;
				std::string flag = "";
				std::smatch sm;
				std::string cmb = m[1].str();
				while(std::regex_search(cmb, sm, re_note_split)){
					tmp.push_back(sm[1].str());
					if (flag.size() == 0)
						flag = sm[2].str();
					cmb = sm.suffix().str();
				}
				if (tmp.size() > 0){
					CBaseNote* note = new CBaseNote(CBaseNote::eNoteType::Chord, time);
					for(auto str : tmp)
						note->addNote(0, time, str);
					return note;
				}
			}
		}catch(std::regex_error& e){
			std::cerr << "error: " << e.what() << std::endl;
		}
		return NULL;
	}
	
	CBaseNote* parse_note(const std::string& note){
		CBaseNote* ret = NULL;
		// first check is stop note
		ret = parse_stop_note(note);
		if (ret != NULL) return ret;
		// check is normal note
		ret = parse_normal_note(note);
		if (ret != NULL) return ret;
		// check is combine note ; eg : (xxx~xxx~xx)[L]
		ret = parse_combine_note(note);
		return ret;
	}
	
	std::vector<CBaseNote*> parse_beats(const std::string& beats, std::vector<tMarkItem>& marks){
		std::smatch m;
		std::vector<CBaseNote*> ret;
		std::string s = beats;
		try{
			std::regex re_sec("([0-9]*)(<*)([^>,;]+)(>*)[,;]", std::regex_constants::egrep| std::regex_constants::icase);
			while (std::regex_search(s,m,re_sec)) {
				if (m[3].length() != 0){
					CBaseNote* p = parse_note(m[3].str());
					if (!p){
						s = m.suffix().str();
						continue;
					}

					if (m[1].length() != 0 &&m[2].length() !=0  && m[4].length() != 0){
						marks.push_back(tMarkItem(getSecType(m[1].str()), ret.size(), ret.size()));
					}else if (m[1].length() != 0 &&m[2].length() !=0 && m[4].length() == 0){
						marks.push_back(tMarkItem(getSecType(m[1].str()), ret.size(), 0));
					}else if (m[1].length() == 0 &&m[2].length() ==0 && m[4].length() != 0){
						if (marks.size() > 0){
							tMarkItem& back = marks.back();
							back.setLast(ret.size());
						}
					}
					ret.push_back(p);
				}
				s = m.suffix().str();
			}
		}catch(std::regex_error& e){
			std::cerr << "error:" << e.what() << std::endl;
		}

		return ret;
	}
	
	std::vector<CMusicNote*> parse_song(const std::string& strTreble, const std::string& strBacking){
		std::vector<CMusicNote*> ret;
		std::vector<tMarkItem> marks, tmp;
		std::vector<CBaseNote*> treble_notes = parse_beats(strTreble, marks);
		std::vector<CBaseNote*> back_notes = parse_beats(strBacking, tmp);
		std::cout << "treble size=" << treble_notes.size() << ",back_note size="<<back_notes.size();
		if (treble_notes.size() == 0)
			return ret;

		std::cout << back_notes;
		int trebleTimes = 0, backTimes = 0, lastBackOffset = 0, index = 0;
		CMusicNote* lastMusicNote = NULL;
		for(auto treble : treble_notes){
			CMusicNote* p = new CMusicNote();
			p->addTrebleNote(treble);
			p->setBackingOffsetTimes(lastBackOffset);
			trebleTimes += treble->getPlayTime();
			if (backTimes > 0 && trebleTimes <= backTimes){
			}else{
				int backIndex = 0;
				for(auto back : back_notes){
					backTimes += back->getPlayTime();
					p->addBackingNote(back);
					backIndex++;
					if (backTimes >= trebleTimes){
						break;
					}
				}

				if (backIndex > 0){
					back_notes = std::vector<CBaseNote*>(back_notes.begin() + backIndex, back_notes.end());
				}
			}
			lastBackOffset = backTimes - trebleTimes;
			std::cout << p;
		}
		return ret;
	}
	
};

inline std::ostream& operator << (std::ostream& os, const std::vector<CSongParser::tMarkItem>& t1){
	int idx = 0;
	os << "trace std::vector<tMarkItem>" << std::endl;
	for(auto item : t1){
		os << "\t" << idx++ << item;
	}
	std::cout << std::endl;
	return os;
}

int main(int argc, char **argv){
	CSongParser parser;
	parser.parse_song(music_high, music_low);
	return 0;
}
