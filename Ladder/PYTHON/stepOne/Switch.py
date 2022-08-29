class switch:
	def case(self, expression):
		default = "this will be default"
		return getattr(self, "case__" + str(expression), lambda: default)()

	def case__1(self):
		return "this is expression 1"
	def case__2(self):
		return "this is expression 2"


switch_stat = switch()
print(switch_stat.case(1))