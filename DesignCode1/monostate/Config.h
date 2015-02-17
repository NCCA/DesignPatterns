#ifndef CONFIG_H__
#define CONFIG_H__
#include <string>

class Config
{
  public :
    Config();
    inline int getPointSize() const {return m_pointSize;}
    inline std::string getColour() const {return m_colour;}
    inline std::string getDrawMode() const {return m_drawMode;}
  private :
    static bool m_configRead;
    static int m_pointSize;
    static std::string m_colour;
    static std::string m_drawMode;
};


#endif
